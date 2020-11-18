#ifndef __FPR_HPP__
#define __FPR_HPP__

#include<cstdarg>
#include<iostream>

class FPR {
public:
  virtual unsigned doOperation(int number, ...) const = 0;;
};

#endif