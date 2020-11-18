#ifndef __PROJECTION_FUNCTION_HPP__
#define __PROJECTION_FUNCTION_HPP__

#include"fpr.hpp"

class ProjectionFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif