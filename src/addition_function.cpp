#include"addition_function.hpp"

unsigned AdditionFunction::doOperation(int number, ...) const {
  va_list args;
  va_start(args, number);
  unsigned first = va_arg(args, unsigned);
  unsigned second = va_arg(args, unsigned);
  va_end(args);
  unsigned temp;
  if (second == 0) {
    temp = ProjectionFunction().doOperation(1, first);
    return temp;
  }
  temp = SuccesorFunction().doOperation(1,
                          AdditionFunction::doOperation(2, first, second - 1));
  return temp;
}
