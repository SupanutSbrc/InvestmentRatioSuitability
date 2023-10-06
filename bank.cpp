#include "bank.hpp"
#include <iostream>
#include "checknum.hpp"

void Bank::ip_name(string name){
  b_name = name;
}

void Bank::ip_current_saving(){
  string previous_saving;
  cout << "Current Savings: ";
  cin >> previous_saving;
  while(isNumber(previous_saving)!=true){
      cout << "Error, please enter your current savings again: ";
      cin >> previous_saving;
  }
  b_current_saving = stof(previous_saving);
}  

void Bank::ip_age(){
  string age;

  cout << "Age: ";
  cin >> age;
  while(isNumber(age)!=true){
    cout << "Error, please enter your current age again: ";
    cin >> age;
  }
  b_age = stoi(age);
}