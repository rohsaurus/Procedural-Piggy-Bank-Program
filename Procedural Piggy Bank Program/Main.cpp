/**
 *Rohan Parikh
 *Proceduraly built Piggy Bank Program
 *1 December 2020 -
 *Extra Thing: 
 */

#include <iomanip>
#include <iostream>
#include "Functions.h"
//namespaces can sometimes cause problems make sure you are able to use it

using namespace std;




int main ()
{
    cout << "Hello user!, Enter your name:\n";
    string name;
    cin >> name;
    cout << "How many quarters do you have?\n";
    int quarters;
    cin >> quarters;
    cout << "How many dimes do you have?\n";
    int dimes;
    cin >> dimes;
    cout << "How many nickels do you have?\n";
    int nickels;
    cin >> nickels;
    cout << "How many pennies do you have?\n";
    int pennies;
    cin >> pennies;


    // Strings that introduce the names of the function
    string method1 = "Chart to display inputs";

    // Running the methods
    chart(method1,pennies,nickels,dimes,quarters);
    
}
