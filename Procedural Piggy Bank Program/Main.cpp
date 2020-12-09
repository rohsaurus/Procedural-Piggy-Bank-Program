/**
 *Rohan Parikh
 *Proceduraly built Piggy Bank Program
 *1 December 2020 -
 *Extra Thing: Telling user their savings in five years
 */

#include <iomanip>
#include <iostream>
#include <stdbool.h>

#include "Functions.h"
//namespaces can sometimes cause problems make sure you are able to use it

using namespace std;
 

int main ()
{
    // Declaring Variables where user will input the values.
    string name;
    int quarters, dimes, nickels, pennies;
    double weeks;

    // While true loop to make sure user enters positive numbers (error checking)
    while (true) {
    cout << "Hello user!, Enter your name:\n";
    cin >> name;
    cout << "How many quarters do you have?\n";
    cin >> quarters;
    cout << "How many dimes do you have?\n";
    cin >> dimes;
    cout << "How many nickels do you have?\n";
    cin >> nickels;
    cout << "How many pennies do you have?\n";
    cin >> pennies;
    cout << "How many weeks have you been saving for?\n";
    cin >> weeks;

        // If statements to check if values are positive or not
    if (quarters >= 0 && dimes >= 0 && nickels >= 0 && pennies >= 0) 
    {
        if (weeks >= 0)
        {
            break;
        }
        else
        {
            cout << "Weeks is currently not a positive number. Make sure to put it in as a positive number.";
        }
    }
        else
        {
            cout << "Make sure all your values are positive numbers.\n";
        }
}

    // Variables to return from methods
    
    double total_money;
    double savings_in_a_week;
    
    // Strings that introduce the names of the function
    string method1 = "Chart to display inputs";
    string method2 = "Grand Total";
    string method3 = "Savings Per Week";
    string method4 = "Savings in a Year";
    string method5 = "Savings in five years";
    // Running the methods
    chart(method1,pennies,nickels,dimes,quarters);
    total_money = grand_total(method1,pennies,nickels,dimes,quarters);
    savings_in_a_week = (method3,name,weeks, total_money);
    savings_in_year(method4,name,savings_in_a_week);
    // Running extra thing method
    savings_in_five_years(method5,name,savings_in_a_week);
    
}
