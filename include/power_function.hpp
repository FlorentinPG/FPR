#ifndef __POWER_FUNCTION_HPP__
#define __POWER_FUNCTION_HPP__

#include"product_function.hpp"

class PowerFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif