// Functions explorer

#pragma once

#include <string>

void chart(std::string method1,int pennies, int nickels, int dimes, int quarters);

double grand_total(std::string method2,int pennies, int nickels, int dimes, int quarters);

double savings_per_week(std::string method3, std::string name, double total_money, double weeks);

double savings_in_year(std::string method4, std::string name, double savings_in_a_week);

// Extra thing method
double savings_in_five_years(std::string method5, std::string name, double savings_in_year);

// Saving statement
void savings_statement(std::string method6, std::string name, double savings_in_a_week,double total_money,double savings_in_one_year,double savings_in_five_years);
