// Author: LDT
// Date: 18APR2019
// Title: mydate.h
// Description: Header file for Date class

#include <string>
#include <iostream>

#ifndef MYDATE_H
#define MYDATE_H


class Date{
    friend std::ostream& operator<<(ostream& output, const Date& date);
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
    string getMonthName();
};

#endif //MYDATE_H