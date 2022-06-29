#include "walk_right.h"

namespace ai_server::model::motion {

//walk_right::walk_right() : base(19) {} //m 通常右
//walk_right::walk_right() : base(23) {} //m 微小右
walk_right::walk_right() : base(18) {} //m 微小left 

std::tuple<double, double, double> walk_right::execute() {
  return std::make_tuple<double, double, double>(0.0, 100.0, 0.0);
}

} // namespace ai_server::model::motion