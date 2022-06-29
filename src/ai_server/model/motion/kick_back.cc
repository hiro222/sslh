#include "kick_back.h"

namespace ai_server::model::motion {

kick_back::kick_back() : base(31) {}

std::tuple<double, double, double> kick_back::execute() {
  return std::make_tuple<double, double, double>(0.0, 0.0, 0.0);
}

} // namespace ai_server::model::motion