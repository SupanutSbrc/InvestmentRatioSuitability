#ifndef GETINFO_HPP
#define GETINFO_HPP

float saving_permonth();
float expense_permonth();
int retire_age(int age);
int death_age();
float money_needed(int death_age, int retire_age, float expense_permonth);
float expected_money_earned(int retire_age, int age, float current_saving, float saving_permonth);
bool only_saving(float expected_money_earned, float money_needed);
bool ask_more_inform();
void sayhi_start();
void printdetails(); //overriding

#endif //Getinfo.hpp