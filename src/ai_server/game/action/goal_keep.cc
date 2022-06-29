#include <cmath>
#include <boost/math/constants/constants.hpp>

#include "ai_server/util/math/angle.h"
#include "ai_server/util/math/geometry.h"
#include "ai_server/util/math/to_vector.h"
#include "ai_server/util/math/distance.h"
#include "ai_server/model/motion/open_leg.h"
#include "ai_server/model/motion/open_leg_left.h"
#include "ai_server/model/motion/open_leg_right.h"
#include "ai_server/model/motion/wait_4.h"
#include "ai_server/model/motion/walk_left.h"
#include "ai_server/model/motion/walk_right.h"
#include "goal_keep.h"

#include <iostream>  //omega表示のため

namespace ai_server::game::action {

goal_keep::goal_keep(context& ctx, unsigned int id)
    : base(ctx, id),
      dribble_(0),
      kick_type_(model::command::kick_type_t::none, 0.0),
      halt_flag_(false) {}

void goal_keep::set_kick_type(const model::command::kick_flag_t& kick_type) {
  kick_type_ = kick_type;
}

void goal_keep::set_dribble(int dribble) {
  dribble_ = dribble;
}

void goal_keep::set_halt(bool halt_flag) {
  halt_flag_ = halt_flag;
}

int goal_keep::dribble() const {
  return dribble_;
}

model::command goal_keep::execute() {
  using boost::math::constants::pi;
  //それぞれ自機を生成
  model::command command{};

  command.set_kick_flag(kick_type_);
  command.set_dribble(dribble_);

  // ロボットの半径
  constexpr double robot_rad = 90.0 ;   // m org 8.5

  // ロボットの中心からキッカーまでの距離
  constexpr double to_kicker_dist = 70.0;

  // ゴールの幅
  const double width = world().field().goal_width();

  const auto wf = world().field();

  const auto our_robots   = model::our_robots(world(), team_color());
  const auto enemy_robots = model::enemy_robots(world(), team_color());
  const auto robot     = our_robots.at(id_);
  const auto robot_pos = util::math::position(robot); // m


  if (!our_robots.count(id_) || halt_flag_) {
    command.set_velocity(0.0, 0.0, 0.0);
    return command;
  }

  const Eigen::Vector2d goal_pos(world().field().x_min()+100, 0.0);  // gool line +100

  const Eigen::Vector2d ball_vel = util::math::velocity(world().ball());
  const Eigen::Vector2d ball_pos = util::math::position(world().ball());

    //const double dis_to_goal = dis_to_ball + to_kicker_dist;

  // ボールの直線
  auto f = [&enemy_robots, &goal_pos, &ball_vel, &ball_pos](double x) {             //f...直線を表す
    // ボールの速度が出ていればボール軌道
    if ((goal_pos - ball_pos).normalized().dot(ball_vel) > 1000.0)                  //normalized is 何　　dot is 何
      return (ball_vel.y() / ball_vel.x()) * (x - ball_pos.x()) + ball_pos.y();
    // 敵が蹴りそうなら敵の向き
    const auto kicker_itr = std::min_element(
        enemy_robots.cbegin(), enemy_robots.cend(), [&ball_pos](auto& a, auto& b) { //cbigin...先頭を要素を指す読み取り専用イテレータを取得する
          return (util::math::position(a.second) - ball_pos).norm() <
                 (util::math::position(b.second) - ball_pos).norm();                //norm is　normalization
        });
    if (kicker_itr != enemy_robots.cend()) {                                        //cend...最後尾の要素の次を指す読み取り専用イテレータを取得する
      const auto kicker_pos   = util::math::position(kicker_itr->second);
      const auto kicker_theta = kicker_itr->second.theta();
      if ((kicker_pos - ball_pos).norm() < 1000.0 &&
          std::abs(std::atan2(ball_pos.y() - kicker_pos.y(), ball_pos.x() - kicker_pos.x()) -
                   kicker_theta) < pi<double>() / 3.0)
        return std::tan(kicker_theta) * (x - ball_pos.x()) + ball_pos.y();          
    }

    // ボールのy座標
    return ball_pos.y();
  };

//キーパーは変えなければいけない
  const double x        = wf.x_min() + robot_rad;
  const double y        = std::clamp(f(x + to_kicker_dist), -width / 2.0, width / 2.0);       //clamp...値を範囲内に収める
  const auto keeper_pos = util::math::position(our_robots.at(id_));
  const double dist     = ball_pos.y() - keeper_pos.y();
  double theta          = std::abs(dist) > 100.0 ? std::copysign(pi<double>() / 2, dist) : 0.0;
  if ((Eigen::Vector2d(x, y) - keeper_pos).norm() < 50.0)
    theta = util::math::direction(ball_pos, keeper_pos);
  command.set_position(x, y, theta);
 // return command;   // org

  //=======================================================================================================================================================================================//

 //角度
  const auto Radian = std::atan2(keeper_pos.y() - ball_pos.y(), keeper_pos.x() - ball_pos.x());
  
   std::cout << "tomatu " << "\n"; // m

   //キッカーロボットからゴールキーパーまでの距離
  const auto dis_to_ball = util::math::distance(ball_pos, robot_pos);      // m ロボットからボールまでの距離

//シュート判定
if ((goal_pos - ball_pos).normalized().dot(ball_vel) >= 000.0){    // m org 1000

std::cout << "dis_to_ball " << dis_to_ball  <<"\n"; // m
  //ゴール防衛
  if(dis_to_ball < 200.0){       //ボールとロボットが一定距離まで近づいたら robot R =90 ball_r=15
    //if(-0.34 < Radian && Radian < 0.34){

        std::cout << "Open_leg " << "\n"; // m

      command.set_motion(std::make_shared<model::motion::open_leg>()); //両足開く
    }

  
   /* else if(0.34 <= Radian && Radian < 0.95){
      command.set_motion(std::make_shared<model::motion::open_leg_left>());//左足軸に両足開く
    }
    else if(-0.95 < Radian && Radian <= -0.34 ){
      command.set_motion(std::make_shared<model::motion::open_leg_right>());//右足軸に両足開く
    }*/
    /*
    if(ball_pos.y() > keeper_pos.y()){

      std::cout << "left " << "\n"; // m

       command.set_motion(std::make_shared<model::motion::walk_right>());
    }
    else if(ball_pos.y() < keeper_pos.y()){

      std::cout << "right " << "\n"; // m

      command.set_motion(std::make_shared<model::motion::walk_left>());
    }
}
else{
  command.set_motion(std::make_shared<model::motion::wait_4>());          //待機モーション
}
*/

}
return command;   // m

}



bool goal_keep::finished() const {
  return false;
}



} // namespace ai_server::game::action
