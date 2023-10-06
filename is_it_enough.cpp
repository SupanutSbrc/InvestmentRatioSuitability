#include <iostream>
using namespace std;
#include "input.hpp"

bool only_saving(float expected_money_earned, float money_needed){
  if(expected_money_earned > money_needed){
    return true;
    }
  else {
    cout << "\nUnfortunately, depositing your savings in the bank won't be enough for you to reach your goal.\n"<<"At the interest rate of 2 %, your goal is to earn "<< money_needed <<" baht before retirement. Depositing your savings into the bank will give you an expected retirement balance of "<< expected_money_earned<< " baht.\n" << endl;

    return false;
  }
}