#ifndef BANK_HPP
#define BANK_HPP

#include <iostream>
using namespace std;

class Bank{
public:
  string b_name;
  int b_age;
  float b_current_saving;

  void ip_name(string name);
  void ip_age();
  void ip_current_saving();
};

#endif //Bank.hpp