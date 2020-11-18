#ifndef __PRODUCT_FUNCTION_HPP__
#define __PRODUCT_FUNCTION_HPP__

#include"addition_function.hpp"
#include"null_function.hpp"

class ProductFunction : public FPR {
public:
  unsigned doOperation(int number, ...) const;
};

#endif
