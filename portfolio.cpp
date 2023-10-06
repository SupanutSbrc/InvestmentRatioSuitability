#include <iostream>
#include "portfolio.hpp"
#include "bank.hpp"
using namespace std;

void Portfolio::setdata(int retire_age, int death_age){
  m_name = via_bank.b_name;
  m_age = via_bank.b_age;
  m_retire_age = retire_age;
  m_death_age = death_age;
}

void Portfolio::setdata(float saving_permonth, float expense_permonth, float money_needed,float expected_money_earned){
  m_saving_permonth = saving_permonth;
  m_current_saving = via_bank.b_current_saving;
  m_expense_permonth = expense_permonth;
  m_money_needed = money_needed;
  m_expected_money_earned = expected_money_earned;
}