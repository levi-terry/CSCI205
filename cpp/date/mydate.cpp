// Author: LDT
// Date: 18APR2019
// Title: mydate.cpp
// Description: Date class

#include <iostream>
#include <string>
#include "mydate.h"

Date::Date() {
    this->month = 1;
    this->day = 1;
    this->year = 1900;
    this->monthName = getMonthName();
}

Date::Date(int month, int day, int year) {
    this->month = month;
    this->day = day;
    this->year = year;
    this->monthName = getMonthName();
}

Date& Date::operator++() {
    this->day++;
    return *this;
}

Date Date::operator++(int) {
    Date tempDate = *this;
    this->day++;
    return tempDate;
}

Date& Date::operator+=(int d) {
    this->day += d;
    return *this;
}

std::string Date::getMonthName() {
    std::string months[] = {"January",
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

std::ostream& operator<<(std::ostream& output, const Date& date){
    output << date.monthName << " " << date.day << ", " << date.year;
    return output;
}