#ifndef __ADDITION_FUNCTION_HPP__
#define __ADDITION_FUNCTION_HPP__

#include"succesor_function.hpp"
#include"projection_function.hpp"

class AdditionFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif
