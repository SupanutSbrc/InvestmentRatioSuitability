#include <iostream>
using namespace std;
#include "checknum.hpp"
#include "input.hpp"
#include <math.h>
#include <bits/stdc++.h>
int num1 = 0, num2 = 0, num3 =0;

bool isNumber(string num);

float saving_permonth(){
  string saving_permonth;
  cout << "Savings per month: ";
  cin >> saving_permonth;

  while(isNumber(saving_permonth)!=true){
    cout << "Error, please enter your savings per month again: ";
    cin >> saving_permonth;
    }
  float float_saving_permonth = stof(saving_permonth);
  return float_saving_permonth;
  }

float expense_permonth(){
  string expense_permonth;
  cout  << "Expenses per month: ";
  cin >> expense_permonth;

  while(isNumber(expense_permonth)!=true){
    cout << "Error, please enter your expenses per month again: ";
    cin >> expense_permonth;
    }
  float float_expense_permonth = stof(expense_permonth);
  return float_expense_permonth;
  }

int retire_age(int age){
  num1 = age;
  string retire_age;
  cout << "Retirement Age: ";
  cin >> retire_age;
  try{
    num2 = stoi(retire_age);
  }
  catch(...){
    num2 = 0;
  }
  while(isNumber(retire_age)!=true || num1>num2){
    cout << "Error, please enter your retirement age again: ";
    cin >> retire_age;
    try{
      num2 = stoi(retire_age);
    }
    catch(...){
      num2 = 0;
    }
  }
  int int_retire_age = stoi(retire_age);
  return int_retire_age;
  }

int death_age(){
  string death_age;
  cout << "Expected Lifespan: ";
  cin >> death_age;
  try{
    num3 = stoi(death_age);
  }
  catch(...){
    num3 = 0;
  }
  while(isNumber(death_age)!=true || num2>num3){
    cout << "Error, please enter your expected lifespan again: ";
    cin >> death_age;
    try{
      num3 = stoi(death_age);
    }
    catch(...){
      num3 = 0;
    }
  }
  int int_death_age = stoi(death_age);
  return int_death_age;
  }
float money_needed(int death_age, int retire_age, float expense_permonth){
  float moneyneeded = (death_age-retire_age)*(expense_permonth*12);
  cout << "Goal: " << fixed << setprecision(2) << moneyneeded << endl;
  return moneyneeded;
  }
float expected_money_earned(int retire_age, int age, float current_saving, float saving_permonth){
  float rate_fromsavings = 0;
  int i;
  for(i=0; i<=retire_age-age; i++){
    rate_fromsavings = rate_fromsavings + pow(1.02, i);
    }
  float expectedmoneyearned = current_saving*pow(1.02, retire_age-age) +(12*saving_permonth*rate_fromsavings);
  cout << "Expected money earned: " << fixed << setprecision(2) << expectedmoneyearned << endl;
  return expectedmoneyearned;
}  