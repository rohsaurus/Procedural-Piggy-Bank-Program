 #include <iomanip>
 #include <iostream>
 #include <string>
 #include <cstdio>
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
 // Prints the grand total before returning it
 setprecision(2);
 cout << "Your grand total is $" << grand_total_cost << endl;
 cout << endl;
 return grand_total_cost;
}

double savings_per_week(string method3, string name, double total_money, double weeks)
{
 cout << "Function: " << method3 << endl << endl;
double savings_per_week_double = total_money/weeks;
cout << name << ", you have saved $" << setprecision(2) << fixed <<  savings_per_week_double << " per week\n";
 cout << endl;
 return savings_per_week_double;
}

void savings_in_a_year(string method4, string name, double savings_in_a_week)
{
 cout << "Function: " << method4 << endl << endl;
 double savings_year = savings_in_a_week * 52;
 cout << name << ", in a year, you could save up to " << setprecision(2) << fixed << savings_year << endl << "if you keep up the same rate\n";
 cout << endl;
}

// Extra thing method
void savings_in_five_years(string method5, string name, double savings_in_a_week)
{
 cout << "Function: " << method5 << endl << endl;
 double savings_5_years = (savings_in_a_week * 52) * 5;
 cout << name << ", in five years, you could save up to " << setprecision(2) << fixed << savings_5_years << endl << "if you kept up the same rate of saving\n";
}


