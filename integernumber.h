#ifndef INTEGERNUMBER_H
#define INTEGERNUMBER_H
#include"number.h"
#include"realnumber.h"
#include<iostream>
using namespace std;

class IntegerNumber :public RealNumber
{
 public:
    IntegerNumber(int);
    ~IntegerNumber();
    void print();
    IntegerNumber add(const IntegerNumber &other);
    IntegerNumber mul(const IntegerNumber &other);

 private:
    int n;
};

#endif
