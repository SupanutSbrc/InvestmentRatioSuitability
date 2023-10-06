#include "portfolio.hpp"
using namespace std;

#ifndef ONLYSAVING_HPP
#define ONLYSAVING_HPP

class Onlysaving: public Portfolio{
  public:
    void sayhi();
    void printdetails(); //overriding
};
#endif //Onlysaving.hpp