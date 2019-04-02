// Author: LDT
// Date: 02APR2019
// Title: calendar.cpp
// Description: This program takes the user input of year and
// month and displays the corresponding days for that combo.

#include <iostream>
#include <string>
using namespace std;

// TODO: Write function that prints calendar
// TODO: Find base day of week (use Jan 1, 1)
// TODO: Determine day of week from base

// Function to get name of month depending on int given
string getMonthName(int month){
    // Array with names of months
    // Indices correspond to number of month - 1
    string months[] = {"January",
                       "February",
                       "March",
                       "April",
                       "May",
                       "June",
                       "July",
                       "August",
                       "September",
                       "October",
                       "November",
                       "December"};

    return months[month];
}

// Function to get number of days in month
int getMonthDays(int month, int year){
    // January, March, May, July, August, October, December
    if(month == 0 || month == 2 || month == 4 || month == 6 || month == 7 || month == 9 || month == 11){
        return(31);
    }

    // February
    if(month == 1){
        // Check for leap year/non-leap century year
        if(year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)){
            return(29);
        }
        else{
            return (28);
        }
    }

    // April, June, September, November
    else{
        return(30);
    }
}

// Main code
int main(){
    // Variables
    int userYear;
    int userMonth;

    cout << "Enter year:" << endl;
    cin >> userYear;

    // Verify userYear is above 1
    if(userYear < 1){
        while(userYear < 1) {
            cout << "Please enter a valid year (above year 1):" << endl;
            cin >> userYear;
        }
    }

    cout << "userYear = " << userYear << endl; // TODO: remove this test line

    cout << "Enter month (from 1 to 12):" << endl;
    cin >> userMonth;

    // Verify userMonth is between 1 and 12
    if(userMonth < 1 || userMonth > 12){
        while(userMonth < 1 || userMonth > 12){
            cout << "Please enter a valid month (from 1 to 12):" << endl;
            cin >> userMonth;
        }
    }

    cout << "userMonth = " << userMonth << endl; // TODO: remove this test line
    userMonth -= 1; // This is for correct indexing

    cout << getMonthName(userMonth) << endl; // TODO: remove this test line

    return 0;
}