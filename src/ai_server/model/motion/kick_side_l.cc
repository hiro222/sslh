#include "kick_side_l.h"

namespace ai_server::model::motion {

kick_side_l::kick_side_l() : base(28) {}

std::tuple<double, double, double> kick_side_l::execute() {
  return std::make_tuple<double, double, double>(100.0, 0.0, 0.0);
}

} // namespace ai_server::model::motion