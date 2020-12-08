 #include <iomanip>
 #include <iostream>
 #include <string>
 #include <cstdio>
//namespaces can sometimes cause problems make sure you are able to use it
using namespace std;

void chart(string method1,int pennies, int nickels, int dimes, int quarters)
{
 cout << "Function: " << method1 << endl << endl;
//  Cout that prints the header for the chart
 cout << setw(20) << "Quarters" << setw(20) << "Dimes" << setw(20) << "Nickels" << setw(20) << "Pennies" << endl;
// Cout statement that prints values of coins
 cout << setw(20) << quarters << setw(20) << dimes << setw(20) << nickels << setw(20) << pennies << endl;
 cout << endl << endl;
}

double grand_total(string method2, int pennies, int nickels, int dimes, int quarters,double grand_total_cost)
{
 cout << "Function: " << method2 << endl << endl;
  grand_total_cost = (pennies * .01);
  grand_total_cost = (nickels * .05) + grand_total_cost;
  grand_total_cost = (dimes * .1) + grand_total_cost;
  grand_total_cost = (quarters * .25) + grand_total_cost;
 setprecision(2);
 cout << "Your grand total is $" << grand_total_cost << endl;
 cout << endl << endl;
 return grand_total_cost;
}

void savings_per_week(string method3, string name, double grand_total_cost)
{
 cout << "Function: " << method3 << endl << endl;
 double savings
}

