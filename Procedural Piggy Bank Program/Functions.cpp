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

}
