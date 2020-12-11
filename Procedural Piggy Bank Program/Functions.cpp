 #include <iomanip>
 #include <iostream>
 #include <string>

//namespaces can sometimes cause problems make sure you are able to use it
using namespace std;

// Function that outputs the values of the coins in a chart format
void chart(string method1,int pennies, int nickels, int dimes, int quarters)
{
 
 cout << "Function: " << method1 << endl << endl;
//  Cout that prints the header for the chart
 cout << setw(20) << "Quarters" << setw(20) << "Dimes" << setw(20) << "Nickels" << setw(20) << "Pennies" << endl;
// Cout statement that prints values of coins
 cout << setw(20) << quarters << setw(20) << dimes << setw(20) << nickels << setw(20) << pennies << endl;
 cout << endl;
 
}

// Calculates the grand total and returns to a variable in main
double grand_total(string method2, int pennies, int nickels, int dimes, int quarters)
{
 double grand_total_cost = 0;
 cout << "Function: " << method2 << endl << endl;
  grand_total_cost = (pennies * .01);
  grand_total_cost = (nickels * .05) + grand_total_cost;
  grand_total_cost = (dimes * .1) + grand_total_cost;
  grand_total_cost = (quarters * .25) + grand_total_cost;
 // returns grand total
 return grand_total_cost;
}

// Method to calculate the savings user earned per week
double savings_per_week(string method3, string name, double total_money, double weeks)
{
 cout << "Function: " << method3 << endl << endl;
double savings_per_week_double = total_money/weeks;
 // returns savings per week
return savings_per_week_double;
}

// Method to calculate user savings in a year
double savings_in_year(string method4, string name, double savings_in_a_week)
{
 cout << "Function: " << method4 << endl << endl;
 double savings_year = savings_in_a_week * 52;
 // returns savings in a year
return savings_year;
}

// Extra thing method
double savings_in_five_years(string method5, string name, double savings_in_a_week)
{
 cout << "Function: " << method5 << endl << endl;
 double savings_5_years = (savings_in_a_week * 52) * 5;
 // returns savings in five years
return savings_5_years; 
}

// Savings statement method
 void savings_statement(string method6, string name, double savings_in_a_week,double total_money,double savings_in_one_year,double savings_in_five_years)
{
 cout << "Function: " << method6 << endl << endl;
 cout << name << ", you have an average savings rate of $" << setprecision(2) << fixed << savings_in_a_week << " per week!\n That's amazing!\n";
 cout << name << ", you currently have $" << setprecision(2) << fixed << total_money <<"! Great job!\n";
 cout << "Great job " << name << ". You can earn $" << setprecision(2) << fixed << savings_in_one_year << " in a year if you keep this\n rate up!\n";
 cout << "If you keep this up, you will save $" << setprecision(2) << fixed << savings_in_five_years << " in five years! Great\n job " << name << endl;
}

