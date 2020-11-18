#include"succesor_function.hpp"

unsigned SuccesorFunction::doOperation(int number, ...) const {
  va_list args;
  va_start(args, number);
  unsigned value = va_arg(args, unsigned);
  va_end(args);
  return value + 1;
}
