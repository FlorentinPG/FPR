#ifndef __NULL_FUNCTION_HPP__
#define __NULL_FUNCTION_HPP__

#include"fpr.hpp"

class NUllFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif