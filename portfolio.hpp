using namespace std;
#include "bank.hpp"

#ifndef PORTFOLIO_HPP
#define PORTFOLIO_HPP

class Portfolio{

  public: 
  void setdata(int retire_age, int death_age);
  void setdata(float saving_permonth, float expense_permonth, float money_needed,float expected_money_earned);

  string m_name;
  int m_age;
  float m_saving_permonth;
  float m_current_saving;
  float m_expense_permonth;
  int m_retire_age;
  int m_death_age;
  float m_money_needed;
  float m_expected_money_earned;

  Bank via_bank;
};
#endif //Portfolio.hpp