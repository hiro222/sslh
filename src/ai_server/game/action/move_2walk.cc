#include <cmath>
#include "move_2walk.h"
#include "ai_server/util/math/angle.h"
#include "ai_server/util/math/to_vector.h"
#include "ai_server/model/motion/walk_forward.h"
#include "ai_server/model/motion/turn_left.h"
#include "ai_server/model/motion/turn_right.h"
#include "ai_server/model/motion/walk_left.h"
#include "ai_server/model/motion/walk_right.h"
#include "ai_server/model/motion/stop.h"

#include <iostream>         //omega表示のため
using namespace std;        //omega表示のため

namespace ai_server::game::action {　// コンストラクタとして記述
    move_2walk::move_2walk(context& ctx, unsigned int id) : base(ctx, id){}
    bool move_2walk::finished() const{
        return false;
    }

    void move_2walk::set_omega(double omega) {　　// 引数オメガ設定​
        omega_ = omega;
    }

    model::command move_2walk::execute() { // 関数として設定
        model::command command{};
        const auto our_robots =model::our_robots(world(), team_color());
    
        if(!our_robots.count(id_)) return command;
            const auto robot = our_robots.at(id_);
            const auto robot_pos =util::math::position(robot);
            const auto ball_pos =util::math::position(world().ball());
    
            command.set_position(ball_pos, util::math::direction(ball_pos, robot_pos));  // set_position set_ver を使用するとdrinerの影響を受ける

            constexpr double rot_th = 0.5;　　// 30度

              if(-rot_th < omega_  &&  rot_th > omega_){　　// 前方　+-３０度の場合　前進
                  command.set_motion(std::make_shared<model::motion::walk_forward>());}

              if(rot_th < omega_ ){                         // +30度　以上の場合左周り
                  command.set_motion(std::make_shared<model::motion::turn_left>());}
             
            　if(omega_ < -rot_th){                         // -30度　以下の場合右周り
                  command.set_motion(std::make_shared<model::motion::turn_right>());}
                    
        return command;
    }   
}
