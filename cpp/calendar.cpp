// Author: LDT
// Date: 02APR2019
// Title: calendar.cpp
// Description: This program takes the user input of year and
// month and displays the corresponding days for that combo.

#include <iostream>
#include <string>
#include <iomanip>
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
        if(year % 4 == 0){
            if(year % 100 == 0){
                if(year % 400 == 0){
                    return(29);
                }
                else if(year < 1800){
                    return(29);
                }
                else{
                    return(28);
                }
            }
            else{
                return(29);
            }
        }
        else{
            return(28);
        }
    }

    // April, June, September, November
    else{
        return(30);
    }
}

// Function to add up number of days since January 1, 1
int getTotalNumberDays(int month, int year){
    int totalDays = 0;
    for(int i = 1; i < year; i++){
        if(i % 4 == 0){
            if(i % 100 == 0){
                if(i % 400 == 0){
                    totalDays += 366;
                }
                else if(year < 1800){
                    totalDays += 366;
                }
                else{
                    totalDays += 365;
                }
            }
            else{
                totalDays += 366;
            }
        }
        else{
            totalDays += 365;
        }
        if(i == 1752){
            totalDays -= 12;
        }
    }
    if(month > 0){
        totalDays += 31; // January
    }
    if(month > 1){
        if(year % 4 == 0){
            if(year % 100 == 0){
                if(year % 400 == 0){
                    totalDays += 29;
                }
                else if(year < 1800){
                    totalDays += 29;
                }
                else{
                    totalDays += 28;
                }
            }
            else{
                totalDays += 29;
            }
        }
        else{
            totalDays += 28;
        }
    }
    if(month > 2){
        totalDays += 31; // March
    }
    if(month > 3){
        totalDays += 30; // April
    }
    if(month > 4){
        totalDays += 31; // May
    }
    if(month > 5){
        totalDays += 30; // June
    }
    if(month > 6){
        totalDays += 31; // July
    }
    if(month > 7){
        totalDays += 31; // August
    }
    if(month > 8){
        if(year == 1752){
            totalDays += 19;
        }
        else {
            totalDays += 30; // September
        }
    }
    if(month > 9){
        totalDays += 31; // October
    }
    if(month > 10){
        totalDays += 30; // November
    }
    return totalDays;
}

// Function to determine the start day
int getStartDay(int month, int year){
    int totalDays = getTotalNumberDays(month, year);
    int startDay0 = 5;
    return (totalDays + startDay0) % 7;
}

// Function to print the calendar
void printCalendar(int month, int year) {
    int days = getMonthDays(month, year);
    int day = getStartDay(month, year);
    int dayCounter = 1;
    int weekCounter = 0;
    cout << setw(18) << getMonthName(month) << "  " << year << endl;
    cout << "  Sun  Mon  Tue  Wed  Thu  Fri  Sat" << endl;
    // Set spacing for start day
    for(int i = 0; i <= day; i++){
        cout << "     ";
        weekCounter += 1;
    }
    // Print days of month
    for(dayCounter; dayCounter <= days; dayCounter++){
        if(dayCounter == 3 && year == 1752 && month == 8){
            dayCounter = 14;
        }
        if(weekCounter % 7 == 0){
            cout << endl;
        }
        if (dayCounter < 10) {
            cout << "    " << dayCounter;
        } else {
            cout << "   " << dayCounter;
        }
        weekCounter += 1;
    }
    cout << endl;
}

// Main code
int main(){
    // Variables
    int userYear;
    int userMonth;
    int totalDays;

    cout << "Enter year:" << endl;
    cin >> userYear;

    // Verify userYear is above 1
    if(userYear < 1){
        while(userYear < 1) {
            cout << "Please enter a valid year (above year 0):" << endl;
            cin >> userYear;
        }
    }

    cout << "Enter month (from 1 to 12):" << endl;
    cin >> userMonth;

    // Verify userMonth is between 1 and 12
    if(userMonth < 1 || userMonth > 12){
        while(userMonth < 1 || userMonth > 12){
            cout << "Please enter a valid month (from 1 to 12):" << endl;
            cin >> userMonth;
        }
    }

    userMonth -= 1; // This is for correct indexing

    printCalendar(userMonth, userYear);

    return 0;
}