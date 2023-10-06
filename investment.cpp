#include <iostream>
#include "investment.hpp"
#include <math.h>
using namespace std;

bool Investment::calcu_risk(int type){
  m_type = type;
  float money_needed;
  money_needed = (m_death_age-m_retire_age)*(m_expense_permonth*12);
  float forgone, equity_ratio, bond_ratio, alt_ratio, expected_earn;
  float rate_fromsavings = 0;
  int i;
  for(i=0; i<=m_retire_age-m_age; i++){
    rate_fromsavings = rate_fromsavings + pow(1.02, i);
    }
  int eq;
  float equity_rate = 0;
  for(eq=0; eq<=m_retire_age-m_age; eq++){
    equity_rate = equity_rate + pow(1.08, eq);
    }
  int bo;
  float bond_rate = 0;
  for(bo=0; bo<=m_retire_age-m_age; bo++){
    bond_rate = bond_rate + pow(1.04, bo);
    }
  int al;
  float alt_rate = 0;
  for(al=0; al<=m_retire_age-m_age; al++){
    alt_rate = alt_rate + pow(1.03, al);
    }
  int maxvalue = 123;
  int y = 0;
  float g;
  string risk_type;
  if(m_type==1){
    risk_type = "low";
  }
  else if(m_type==2){
    risk_type = "neutral";    
  }
  else if(m_type==3){
    risk_type = "high";    
  }
  
  while (true){
    y = y+1;
    if(expected_earn>=money_needed){ 
      cout<<"Investment suggestion: Risk- "<<risk_type<<"\nEquity: "<<equity_ratio*100<<" %"<<"\nBond: "<<bond_ratio*100<<" %"<<"\nAlternative Assets: "<<alt_ratio*100<<" %"<<"\nDeposit: "<<forgone*100<<" %"<<"\n\nExpected Return: "<<expected_earn<<" baht.\nGood luck on investing.";
      return true; 
    }
    else if(y>=maxvalue){
      if(m_type==1){
        cout<<"At low risk, the maximum amount that you can earn is: "<< expected_earn<<" baht.\n";
        cout<<"You won't earn enough. Move on to risk neutral.\n";
        return false;
        }
      else if(m_type==2){
        cout<<"At risk neutral, the maximum amount that you can earn is: "<< expected_earn<<" baht.\n";
        cout<<"You won't earn enough. Move on to high risk.\n";
        return false;
      }
      else if(m_type==3){
        cout<<"At high risk, the maximum amount that you can earn is: "<< expected_earn<<" baht.\n";
        cout<<"Even with the high risk, you won't earn enough to use after retirement.\nSuggestion: Change Lifestyle such as reducing expense per month.\n";
        return true;
      }
    }
    else{
      g = 5 * y;
      expected_earn = 0;
      if(m_type==1){
        forgone = (100-g)/100;
        equity_ratio = (0.2*g)/100;
        bond_ratio = (0.7*g)/100;
        alt_ratio = (0.1*g)/100;
        maxvalue = 10;
      }
      else if(m_type==2){
        forgone = (100-g)/100;
        equity_ratio = (0.5*g)/100;
        bond_ratio = (0.3*g)/100;
        alt_ratio = (0.2*g)/100;
        maxvalue = 14;
      }
      else if(m_type==3){
        forgone = (100-g)/100;
        equity_ratio = (0.7*g)/100;
        bond_ratio = (0.2*g)/100;
        alt_ratio = (0.1*g)/100;
        maxvalue = 18;
      }
      expected_earn = (m_current_saving*forgone*pow(1.02, m_retire_age-m_age)) + (m_current_saving*equity_ratio*pow(1.08, m_retire_age-m_age)) + (m_current_saving*bond_ratio*pow(1.04, m_retire_age-m_age)) + (m_current_saving*alt_ratio*pow(1.03, m_retire_age-m_age)) + (12*m_saving_permonth*forgone*rate_fromsavings) + (12*m_saving_permonth*equity_ratio*equity_rate) + (12*m_saving_permonth*bond_ratio*bond_rate) + (12*m_saving_permonth*alt_ratio*alt_rate);
    }
  }
}

void Investment::printdetails(){
  cout << "\nAverage from 2010 to 2021, the expected return from investing in equity, bond, and alternative assets are 8%, 4%, and 3% respectively. \n\nFor low risk, the ratio of the investment are stated as following:\nDeposit 100-X %\nEquity 20/100 * X %\nBond 70/100 * X %\nAlternative Assets 10/100 * X %\nwhere 50 is the maximum value of X\n\nFor risk neutral, the ratio of the investment are stated as following:\nDeposit 100-X %\nEquity 50/100 * X %\nBond 30/100 * X %\nAlternative Assets 20/100 * X %\nwhere 70 is the maximum value of X\n\nFor high risk, the ratio of the investment are stated as following:\nDeposit 100-X %\nEquity 70/100 * X %\nBond 20/100 * X %\nAlternative Assets 10/100 * X %\nwhere 90 is the maximum value of X\n\nThe expected return from the investment can be calculated using the following formula:\n\n(current savings * deposit ratio * 1.02^(retirement age - current age)) + (current savings * equity ratio * 1.08^(retirement age - current age)) + (current savings * bond ratio * 1.04^(retirement age - current age)) + (current savings * alternative assets ratio * 1.03^(retirement age - current age)) + (12 * savings per month * deposit ratio * (1.02^0 + 1.02^1 + ... + 1.02^(retirement age - current age))) + (12 * savings per month * equity ratio * (1.08^0 + 1.08^1 + ... + 1.08^(retirement age - current age))) + (12 * savings per month * bond ratio * (1.04^0 + 1.04^1 + ... + 1.04^(retirement age - current age))) + (12 * savings per month * alternative assets ratio * (1.03^0 + 1.03^1 + ... + 1.03^(retirement age - current age)))"<< endl;//details
}