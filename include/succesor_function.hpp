#ifndef __SUCCESOR_FUNCTION_HPP__
#define __SUCCESOR_FUNCTION_HPP__

#include"fpr.hpp"

class SuccesorFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif