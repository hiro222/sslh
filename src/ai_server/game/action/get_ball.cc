#include <cmath>

#include <boost/geometry/geometry.hpp>
#include <boost/geometry/geometries/segment.hpp>
#include <boost/math/constants/constants.hpp>

#include "ai_server/util/math/angle.h"
#include "ai_server/util/math/geometry.h"
#include "ai_server/util/math/to_vector.h"
#include "ai_server/util/math/distance.h"
#include "get_ball.h"

//#include "ai_server/game/action/move_2walk.h"  // m

#include <iostream>  //omega表示のため

using boost::math::constants::pi;

namespace ai_server {
namespace game {
namespace action {

/*　//移動アクションの読み込み設定
get_ball::get_ball(context& ctx, unsigned int id) : base(ctx, id), move_2walk_(ctx, id) {}
bool get_ball::finished() const {  // m
  return false;  
}
*/
get_ball::get_ball(context& ctx, unsigned int id, const Eigen::Vector2d& target)
    : base(ctx, id),
      state_(running_state::move),
      target_(target),
      kick_margin_(200),
      manual_kick_flag_({model::command::kick_type_t::line, 45}),
      auto_kick_pow_(45, 100),
      kick_manually_(true),
      move_2walk_(ctx, id),
      // allow_(10) {}
      allow_(50) {}    // seafty mangin

get_ball::get_ball(context& ctx, unsigned int id)
    : get_ball(ctx, id, Eigen::Vector2d(ctx.world.field().x_max(), 0.0)) {}

get_ball::running_state get_ball::state() const {
  return state_;
}

void get_ball::set_target(double x, double y) {
  target_ = Eigen::Vector2d{x, y};
}

void get_ball::set_target(const Eigen::Vector2d& t) {
  target_ = t;
}

void get_ball::set_kick_margin(double margin) {
  kick_margin_ = margin;
}

void get_ball::set_allow(double allow) {
  allow_ = allow;
}

Eigen::Vector2d get_ball::target() const {
  return target_;
}

void get_ball::kick_automatically() {
  kick_manually_ = false;
}

void get_ball::kick_automatically(int pow) {
  kick_manually_ = false;
  auto_kick_pow_ = {pow, pow};
}

void get_ball::kick_automatically(int line_pow, int chip_pow) {
  kick_manually_ = false;
  auto_kick_pow_ = {line_pow, chip_pow};
}

void get_ball::kick_manually() {
  kick_manually_ = true;
}

void get_ball::kick_manually(int pow) {
  kick_manually_                 = true;
  std::get<1>(manual_kick_flag_) = pow;
}

void get_ball::kick_manually(model::command::kick_type_t type) {
  kick_manually_                 = true;
  std::get<0>(manual_kick_flag_) = type;
}

void get_ball::kick_manually(const model::command::kick_flag_t& kick) {
  kick_manually_    = true;
  manual_kick_flag_ = kick;
}

model::command get_ball::execute() {
  model::command command{};
  const auto our_robots   = model::our_robots(world(), team_color());
  const auto enemy_robots = model::enemy_robots(world(), team_color());
  if (!our_robots.count(id_)) return command;
  const auto& robot               = our_robots.at(id_);
  const Eigen::Vector2d robot_pos = util::math::position(robot);
  const Eigen::Vector2d ball_pos  = util::math::position(world().ball());
  const Eigen::Vector2d ball_vel  = util::math::velocity(world().ball());

  if ((ball_pos - target_).norm() < allow_) {
    state_ = running_state::finished;
    return command;
  }

  // ロボットとボールが十分近づいたと判定する距離
  constexpr double robot_rad = 125;
  // ドリブルバーの回転速度
  constexpr int dribble_value = 5;
  // ロボットとボールの距離
  const double dist_b_to_r = (robot_pos - ball_pos).norm();
  // ロボットと目標の距離
  const double dist_r_to_t = (robot_pos - target_).norm();

  // ボールを持っているか
  const bool have_ball =
      dist_b_to_r < robot_rad &&
      std::abs(util::math::wrap_to_pi(
          robot.theta() - std::atan2(ball_pos.y() - robot_pos.y(),
                                     ball_pos.x() - robot_pos.x()))) < pi<double>() / 6.0;

 // ロボットの目標角度 org 
//  const double theta = std::atan2(target_.y() - robot_pos.y(), target_.x() - robot_pos.x());

// m start

 if (!our_robots.count(id_)) return command;
 // const auto robot = our_robots.at(id_);
 // const auto robot_pos = util::math::position(robot);
 // const auto ball_pos  = util::math::position(world().ball());
  const auto mergin_r   = 40.0 + 90.0;
  double theta  = std::atan2(target_.y() - robot_pos.y(), target_.x() - robot_pos.x()); // m

  const Eigen::Vector2d ene_goal_pos(world().field().x_max(), 0.0);
  double eg_theta = util::math::direction(ene_goal_pos, ball_pos);

  Eigen::Vector2d p1, p2;
  std::tie(p1, p2) = util::math::calc_isosceles_vertexes(ene_goal_pos, ball_pos, mergin_r);
  Eigen::Vector2d target0_pos = ball_pos + mergin_r * (ball_pos - ene_goal_pos).normalized();
  
  auto bp_x = ball_pos.x();
  auto bp_y = ball_pos.y();
  auto rp_x = robot_pos.x();
  // auto rp_y = robot_pos.y();

  auto e_goal_x = ene_goal_pos.x();
  auto e_goal_ball_x = abs(util::math::distance(ene_goal_pos, ball_pos)
                              *cos(util::math::direction(ball_pos,ene_goal_pos)));
  auto e_goal_robo_x = abs(util::math::distance(ene_goal_pos, robot_pos)
                              *cos(util::math::direction(robot_pos,ene_goal_pos)));
  Eigen::Vector2d target0 = ball_pos + mergin_r * (ball_pos - ene_goal_pos).normalized();
  
  theta = util::math::direction_from(util::math::direction(target0, robot_pos),robot.theta());
  
  constexpr double rot_th = 0.5;

  if(e_goal_ball_x >= e_goal_robo_x){  //回り込み判別　何故敵ゴールは全て上なのか？
  　
    if ((util::math::distance(p1, robot_pos)) <= (util::math::distance(p2, robot_pos))) {
      target0 = p1;} //P1が上
    else {
      target0 = p2;} //P2が下

    std::cout << "target0_p" << target0 << "\n"; 
   
     double omega = util::math::direction_from(util::math::direction(target0, robot_pos),robot.theta());
   
     move_2walk_.set_omega(omega);
     return move_2walk_.execute();

  }
  //else if(mergin_r <= util::math::distance(ball_pos, robot_pos)){  
    else if(30.0 <= util::math::distance(target0, robot_pos)){  
    //ボールとロボットの距離がマージンより大きい時のターゲットはボールよりマージン分大きい  
    target0 = ball_pos + mergin_r * (ball_pos - ene_goal_pos).normalized();
    double omega = util::math::direction_from(util::math::direction(target0, robot_pos),robot.theta());

    std::cout << "target0_long" << target0 << "\n";    
  
     move_2walk_.set_omega(omega);
    return move_2walk_.execute();


  }else{ double omega = util::math::direction_from(util::math::direction(target0, robot_pos),robot.theta());

    std::cout << "target0_shoat" << target0 << "\n"; 
  
    move_2walk_.set_omega(omega);
    return move_2walk_.execute();
  
  
  }
　　　　　　 //ボールとロボットの距離がマージンより小さい時のターゲットはボール 

// m end

  //std::cout << "theta " <<  theta << "\n";


  // 速度指令
  switch (state_) {
    // ボールを蹴る
    case running_state::dribble: {
      if (!have_ball) state_ = running_state::move;

      const Eigen::Vector2d vel = 2.0 * (target_ - robot_pos);
      command.set_velocity(vel);
      command.set_angle(theta);
      break;
    }

    // 移動
    default: {
      if (have_ball) state_ = running_state::dribble;

      const double rad =
          std::abs(util::math::wrap_to_pi(
              robot.theta() - std::atan2(ball_pos.y() - robot_pos.y(),
                                         ball_pos.x() - robot_pos.x()))) < 0.2 * pi<double>()
              ? 90.0
              : 150.0;    // m 36 < rad= 90 36 > rad= 150
      Eigen::Vector2d pos = ball_pos + rad * (ball_pos - target_).normalized();
      // m pos is ball roatation distance 
      if (std::abs(util::math::wrap_to_pi(   // m mawarikomi no hanndann
              std::atan2(robot_pos.y() - ball_pos.y(), robot_pos.x() - ball_pos.x()) -
              std::atan2(pos.y() - ball_pos.y(), pos.x() - ball_pos.x()))) >
          0.3 * pi<double>()) {
        const auto [p1, p2] = util::math::calc_isosceles_vertexes(robot_pos, ball_pos, rad);
        pos                 = ((p1 - pos).norm() < (p2 - pos).norm()) ? p1 : p2;
      }
      const Eigen::Vector2d vel =
          3.5 * (pos - robot_pos) + (have_ball ? Eigen::Vector2d::Zero() : ball_vel);
      command.set_velocity(vel);
      command.set_angle(theta);
    }
  }

  // キック・ドリブル
  {
    const Eigen::Vector2d tmp = robot_pos + dist_r_to_t * (Eigen::Rotation2Dd(robot.theta()) *
                                                           Eigen::Vector2d::UnitX());
    const boost::geometry::model::segment<Eigen::Vector2d> line =
        boost::geometry::model::segment(robot_pos, tmp);
    if (dist_b_to_r < robot_rad && boost::geometry::distance(line, target_) < kick_margin_)
      kick(robot_pos, enemy_robots, command);
    if (dist_b_to_r < robot_rad) command.set_dribble(dribble_value);
  }
  return command;
}

void get_ball::kick(const Eigen::Vector2d& robot_pos,
                    const std::unordered_map<unsigned int, model::robot>& enemy_robots,
                    model::command& command) {
  if (kick_manually_) {
    command.set_kick_flag(manual_kick_flag_);
    return;
  }
  // チップが有効そうな距離
  const double radius = std::min((robot_pos - target_).norm(), 1000.0);
  //自分からradiusの位置と自分で三角形を作り,間に敵が1つでもあったらチップにする
  const bool flag = std::any_of(
      enemy_robots.cbegin(), enemy_robots.cend(), [this, &robot_pos, radius](const auto& it) {
        const Eigen::Vector2d ene_pos = util::math::position(it.second);
        return (ene_pos - robot_pos).norm() < radius &&
               std::abs(util::math::wrap_to_pi(std::abs(
                   std::atan2(ene_pos.y() - robot_pos.y(), ene_pos.x() - robot_pos.x()) -
                   std::atan2(target_.y() - robot_pos.y(), target_.x() - robot_pos.x())))) <
                   1.0;
      });
  if (flag) {
    command.set_kick_flag({model::command::kick_type_t::chip, std::get<1>(auto_kick_pow_)});
  } else {
    command.set_kick_flag({model::command::kick_type_t::line, std::get<0>(auto_kick_pow_)});
  }
}

bool get_ball::finished() const {
  return state_ == running_state::finished;
}

} // namespace action
} // namespace game
} // namespace ai_server
