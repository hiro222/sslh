#ifndef AI_SERVER_MODEL_MOTION_KICK_BACK_H
#define AI_SERVER_MODEL_MOTION_KICK_BACK_H

#include "base.h"

namespace ai_server::model::motion {

class kick_back : public base {
public:
  kick_back();

  std::tuple<double, double, double> execute() override;
};

} // namespace ai_server::model::motion

#endif