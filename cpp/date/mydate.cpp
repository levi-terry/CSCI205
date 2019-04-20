// Author: LDT
// Date: 18APR2019
// Title: mydate.cpp
// Description: Date class

#include "mydate.h"
#include <iostream>
using namespace std;

Date::Date() {
    month = 1;
    day = 1;
    year = 1900;
}

Date::Date(int month, int day, int year) {
    month = month;
    day = day;
    year = year;
}

Date& Date::operator++() {
    day++;
    return *this;
}

Date Date::operator++(int) {
    Date temp = *this;
    ++*this;
    return temp;
}

Date& Date::operator+=(int d) {
    day += d;
    return *this;
}

string Date::getMonthName() {
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

    return months[month - 1];
}

std::ostream& operator<<(ostream& output, const Date& date){
    return output << date.getMonthName() << " " << date.day << ", " << date.year;
}