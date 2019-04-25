// Author: LDT
// Date: 18APR2019
// Title: mydate.h
// Description: Header file for Date class

#include <iostream>
#include <string>

#ifndef MYDATE_H
#define MYDATE_H


class Date{
    friend std::ostream& operator<<(std::ostream& output, const Date& date);
public:
    Date();
    Date(int month, int day, int year);
    Date& operator++();
    Date operator++(int);
    Date& operator+=(int d);
private:
    int month;
    int day;
    int year;
    std::string monthName;
    std::string getMonthName();
};

#endif //MYDATE_H