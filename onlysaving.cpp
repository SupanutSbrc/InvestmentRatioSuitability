#include <iostream>
#include "onlysaving.hpp"
using namespace std;

void Onlysaving::sayhi(){
  cout << "Congratulations. It appears that you have enough money after retirement."<< endl;
}

void Onlysaving::printdetails(){
  cout<<"\nYour goal can be calculated using the following formula: \n(expected lifespan - retirement age) * expenses per  month * 12\n Therefore, your goal is to earn "<< m_money_needed <<" baht before retirement.\nAt the interest rate of 2 %, your expected money earned can be calculated using the following formula:\n(currrent savings * 1.02^(retirement age - current age)) + (12 * savings per month * 1.02^0) + (12 * savings per month * 1.02^1)  + ... + (12 * savings per month * 1.02^(retirement age - current age))\nTherefore, depositing your savings in the bank will give you an expected retirement balance of "<< m_expected_money_earned<< " baht."<<endl;
}