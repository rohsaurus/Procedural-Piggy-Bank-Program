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
    cout << "How many weeks have you been saving for?\n";
    double weeks;
    cin >> weeks;


    // Variables to return from methods
    
    double total_money;
    double savings_in_a_week;
    
    // Strings that introduce the names of the function
    string method1 = "Chart to display inputs";
    string method2 = "Grand Total";
    string method3 = "Savings Per Week";
    string method4 = "Savings in a Year";
    // Running the methods
    chart(method1,pennies,nickels,dimes,quarters);
    total_money = grand_total(method1,pennies,nickels,dimes,quarters);
    savings_in_a_week = (method3,name,weeks, total_money);
    savings_in_year(method4,name,savings_in_a_week);
    
    
}
