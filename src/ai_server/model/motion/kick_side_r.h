#ifndef AI_SERVER_MODEL_MOTION_KICK_SIDE_R_H
#define AI_SERVER_MODEL_MOTION_KICK_SIDE_R_H

#include "base.h"

namespace ai_server::model::motion {

class kick_side_r : public base {
public:
  kick_side_r();

  std::tuple<double, double, double> execute() override;
};

} // namespace ai_server::model::motion

#endif