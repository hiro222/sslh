#include "wait_4.h"

namespace ai_server::model::motion {

wait_4::wait_4() : base(0) {}

std::tuple<double, double, double> wait_4::execute() {
  return std::make_tuple<double, double, double>(0.0, 0.0, 0.0);
}

} // namespace ai_server::model::motion