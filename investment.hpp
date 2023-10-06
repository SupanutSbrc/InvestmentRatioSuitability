#include <iostream>
#include "portfolio.hpp"

#ifndef INVESTMENT_HPP
#define INVESTMENT_HPP

class Investment: public Portfolio{
  public:
    bool calcu_risk(int type);
    void printdetails(); //overriding
  private:
    int m_type;
};
#endif //Investment.hpp