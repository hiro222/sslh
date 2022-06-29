#include "kick_side_r.h"

namespace ai_server::model::motion {

kick_side_r::kick_side_r() : base(29) {}

std::tuple<double, double, double> kick_side_r::execute() {
  return std::make_tuple<double, double, double>(100.0, 0.0, 0.0);
}

} // namespace ai_server::model::motion