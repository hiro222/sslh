#ifndef AI_SERVER_MODEL_MOTION_KICK_SIDE_L_H
#define AI_SERVER_MODEL_MOTION_KICK_SIDE_L_H

#include "base.h"

namespace ai_server::model::motion {

class kick_side_l : public base {
public:
  kick_side_l();

  std::tuple<double, double, double> execute() override;
};

} // namespace ai_server::model::motion

#endif