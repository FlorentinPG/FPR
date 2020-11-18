#include"product_function.hpp"

unsigned ProductFunction::doOperation(int number, ...) const {
  va_list args;
  va_start(args, number);
  unsigned first = va_arg(args, unsigned);
  unsigned second = va_arg(args, unsigned);
  va_end(args);
  if (second == 0) {
    return NUllFunction().doOperation(1, first);
  }
  unsigned temp = AdditionFunction().doOperation(2,
                        ProjectionFunction().doOperation(1, first),
                        ProductFunction::doOperation(2, first, second - 1));
  return temp;
}
