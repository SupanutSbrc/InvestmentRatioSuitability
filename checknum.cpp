#include <iostream>
#include "checknum.hpp"
using namespace std;

bool isNumber(std::string num){
  int deci = 0;
  for (int i=0; i<num.length();i++){
    if((isdigit(num[i])==false) and (num[i]!='.') ){
      return false;
    }
    else if(num[i]=='.'){
      deci++;
    }
    if(deci>1){
      return false;
    }
  }
  float numf = stof(num);
  if(numf < 0){
    return false;
  }
  
  return true;
}