#include "input.hpp"
#include "onlysaving.hpp"
#include "investment.hpp"
#include "bank.hpp"
#include <iostream>
#include "measure_risk.hpp"
using namespace std;

int main() { 
  sayhi_start();
  bool want_details0 = ask_more_inform();
    if (want_details0 == true) {
      printdetails();
    }
  
  string name;
  cout << "\nPlease enter your name: ";
  cin >> name;

  Bank user;
  user.ip_name(name);
  user.ip_age();
  user.ip_current_saving();
  
  float float_saving_permonth = saving_permonth();
  float float_expense_permonth = expense_permonth();
  int int_retire_age = retire_age(user.b_age);
  int int_death_age = death_age();
  float float_money_needed =
      money_needed(int_death_age, int_retire_age, float_expense_permonth);
  float float_expected_money_earned = expected_money_earned(int_retire_age, user.b_age, user.b_current_saving, float_saving_permonth);

  bool enough = only_saving(float_expected_money_earned, float_money_needed);
  
  if (enough == true) {
    Onlysaving name;
    name.via_bank.b_age = user.b_age;
    name.setdata(int_retire_age, int_death_age);
    name.via_bank.b_current_saving = user.b_current_saving;
    name.setdata(float_saving_permonth, float_expense_permonth, float_money_needed, float_expected_money_earned);
    name.sayhi(); 
    bool want_details1 = ask_more_inform(); 
    if (want_details1 == true) {
      name.printdetails();
    }
  }
  else {
    cout << "investment\n" << endl; 
    int type = measure_risk();
    Investment name;
    name.via_bank.b_age = user.b_age;
    name.setdata(int_retire_age, int_death_age);
    name.via_bank.b_current_saving = user.b_current_saving;
    name.setdata(float_saving_permonth, float_expense_permonth, float_money_needed, float_expected_money_earned);
    
    bool invest_enough = name.calcu_risk(type);
    
    if(invest_enough == false){
      while(type <= 3){
        type ++;
        bool invest_again = name.calcu_risk(type);
        if(invest_again == true){
          break;
        }  
      }
    }
    bool want_details2 = ask_more_inform(); 
    if (want_details2 == true) {
      name.printdetails();
    }
  }
cout << "\nGoodbye! Thank you for visit our project, Baby Robo Advisor Noi <3";
}