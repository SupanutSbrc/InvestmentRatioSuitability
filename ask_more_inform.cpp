#include <iostream>
#include <set>
#include "input.hpp"
using namespace std;

bool ask_more_inform(){
  string Y_N;
  set<std::string> set_Y_N = {"Y", "y", "N", "n", "Yes", "No", "yes", "no"};
  cout << "\nDo you want to get more details?"<<"\n";
  cout << "Please enter Yes or No: ";
  cin >> Y_N;
  if (Y_N == "Y" || Y_N=="y" || Y_N =="yes" || Y_N =="Yes"){
    return true;
  }
  else if (Y_N == "N" || Y_N=="n" || Y_N =="No" || Y_N =="no"){
    return false;
  }
  else{
    while(set_Y_N.count(Y_N)==false){
      cout << "Error, Please type in again: ";
      cin >> Y_N;
      }
    if (Y_N == "Y" || Y_N=="y" || Y_N =="yes" || Y_N =="Yes"){
    return true;
  }
  else if (Y_N == "N" || Y_N=="n" || Y_N =="No" || Y_N =="no"){
    return false;
    }
  }
}