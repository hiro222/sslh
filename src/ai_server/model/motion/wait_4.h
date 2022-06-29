#ifndef AI_SERVER_MODEL_MOTION_WAIT_4_H
#define AI_SERVER_MODEL_MOTION_WAIT_4_H

#include "base.h"

namespace ai_server::model::motion {

class wait_4 : public base {
public:
  wait_4();

  std::tuple<double, double, double> execute();
};

} // namespace ai_server::model::motion

#endif