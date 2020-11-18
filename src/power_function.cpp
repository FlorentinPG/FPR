#include"power_function.hpp"

unsigned PowerFunction::doOperation(int number, ...) const {
  va_list args;
  va_start(args, number);
  unsigned first = va_arg(args, unsigned);
  unsigned second = va_arg(args, unsigned);
  va_end(args);
  if (second == 0) {
    return SuccesorFunction().doOperation(1,
                      NUllFunction().doOperation(1, first));
  }
  return ProductFunction().doOperation(2,
                            ProjectionFunction().doOperation(1, first, second),
                            PowerFunction::doOperation(2, first, second - 1));
}
