#include"projection_function.hpp"

unsigned ProjectionFunction::doOperation(int number, ...) const {
  va_list args;
  va_start(args, number);
  unsigned value;
  for (unsigned i = 0; i < number; i++) {
    value = va_arg(args, unsigned);
  }
  va_end(args);
  return value;
}
