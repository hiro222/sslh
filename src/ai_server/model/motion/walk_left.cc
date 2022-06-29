#include "walk_left.h"

namespace ai_server::model::motion {

//walk_left::walk_left() : base(22) {} //m 微小左
//walk_left::walk_left() : base(18) {} //m 通常左
walk_left::walk_left() : base(19) {} //m Ajust 微小right

std::tuple<double, double, double> walk_left::execute() {
  return std::make_tuple<double, double, double>(0.0, -100.0, 0.0);
}

} // namespace ai_server::model::motion
