// Author: LDT
// Date: 19MAR2019
// Title: basic_io.cpp
// Description: This program does simple mathematical operations
// on user provided numbers.

#include <iostream>
using namespace std;

// Main body of code
int main() {

   // Variables
   int userNum = 0;
   int userNum2 = 0;

   // Ask user to enter a number
   cout << "Enter integer:" << endl;
   
   // Assign that number to variable userNum
   cin >> userNum;
   
   // Repeat number back to user
   cout << "You entered: " << userNum << endl;
   
   // Display results of user's number squared
   cout << userNum << " squared is " << userNum * userNum << endl;
   
   // Display results of user's number cubed
   cout << "And " << userNum << " cubed is " << userNum * userNum * userNum << "!!" << endl;
   
   // Ask user to enter another number
   cout << "Enter another integer:" << endl;
   
   // Assign that number to variable userNum2
   cin >> userNum2;
   
   // Display sum of two user numbers
   cout << userNum << " + " << userNum2 << " is " << userNum + userNum2 << endl;
   
   // Display product of two user numbers
   cout << userNum << " * " << userNum2 << " is " << userNum * userNum2 << endl;

   // Exit main code
   return 0;
}
