#include <iostream>
#include <set>
#include "measure_risk.hpp"
using namespace std;

int measure_risk(){
  string ans;
  set<std::string> set_abc = {"A", "a", "B", "b", "C", "c"};
  float sum_risk = 0;
  cout << "Here is a Suitability Test that will measure your ability to take a risk.\n\n";
  cout << "1. Do you have financial burdens and regular expenses such as mortgage payments, car payments,or personal expenses? And how much of that?\n\n";
  cout << "A. More than 2/3 of your whole income." << endl;
  cout << "B. Around 50% of your whole income." << endl;
  cout << "C. Less than 1/3 of your whole income.\n\n";
  cout << "Your Answer: ";
  cin >> ans;
  if (ans == "A" || ans=="a"){
    sum_risk+=2;
  }
  else if (ans == "B" || ans=="b"){
    sum_risk+=4;
  }
  else if (ans == "C" || ans=="c"){
    sum_risk+=6;
  }
  else{
    while(set_abc.count(ans)==false){
      cout << "Error, Please type in again: ";
      cin >> ans;
      }
    if (ans == "A" || ans=="a"){
      sum_risk+=2;
      }
    else if (ans == "B" || ans=="b"){
      sum_risk+=4;
      }
    else if (ans == "C" || ans=="c"){
      sum_risk+=6;
      }
    }

  cout << "\n2. How is your currently financial status?\n\n";
  cout << "A. You have liabilities more than assets." << endl;
  cout << "B. Your assets and your liabilities are equal." << endl;
  cout << "C. You have assets more than liabilities.\n\n";
  cout << "Your Answer: ";
  cin >> ans;
  if (ans == "A" || ans=="a"){
    sum_risk+=2;
  }
  else if (ans == "B" || ans=="b"){
    sum_risk+=4;
  }
  else if (ans == "C" || ans=="c"){
    sum_risk+=6;
  }
  else{
    while(set_abc.count(ans)==false){
      cout << "Error, Please type in again: ";
      cin >> ans;
      }
    if (ans == "A" || ans=="a"){
      sum_risk+=2;
      }
    else if (ans == "B" || ans=="b"){
      sum_risk+=4;
      }
    else if (ans == "C" || ans=="c"){
      sum_risk+=6;
      }
    }

  cout << "\n3. Choose one of these conditions.\n\n";
  cout << "A. Your capital is safe but your payoff can be very low" << endl;
  cout << "B. You usally get a moderate payoff, but sometimes you can get loss." << endl;
  cout << "C. There is a high chance of getting loss, but your payoff will be extremely high.\n\n";
  cout << "Your Answer: ";
  cin >> ans;
  if (ans == "A" || ans=="a"){
    sum_risk+=2;
  }
  else if (ans == "B" || ans=="b"){
    sum_risk+=4;
  }
  else if (ans == "C" || ans=="c"){
    sum_risk+=6;
  }
  else{
    while(set_abc.count(ans)==false){
      cout << "Error, Please type in again: ";
      cin >> ans;
      }
    if (ans == "A" || ans=="a"){
      sum_risk+=2;
      }
    else if (ans == "B" || ans=="b"){
      sum_risk+=4;
      }
    else if (ans == "C" || ans=="c"){
      sum_risk+=6;
      }
    }
  
  string type;
  float avg_risk = sum_risk/3;
  cout << endl;
  if(avg_risk<=3){
    type = "risk averse";
    cout << "You are "<< type <<"."<< endl;
    return 1;
  }
  else if(avg_risk>=5){
    type = "risk loving";
    cout << "You are "<< type <<"."<< endl;
    return 3;
  }
  else{
    type = "risk neutral";
    cout << "You are "<< type <<"."<< endl;
    return 2;
  }
}