// Author: LDT
// Date: 19MAR2019
// Title: basic_io2.cpp
// Description: This program practices assignment of different
// types of variables as well as casting a double to an integer.

#include <iostream>
#include <string>
using namespace std;

// Main body of code
int main() {

   // Variable declarations
   int userInt = 0;
   double userDouble = 0.0;
   char userChar;
   string userStr;

   // Asks user to enter an integer (ex. 1)
   cout << "Enter integer:" << endl;
   // Assigns user number to variable userInt
   cin >> userInt;
   
   // Asks user to enter a double (ex. 3.5)
   cout << "Enter double:" << endl;
   // Assigns that double to variable userDouble
   cin >> userDouble;
   
   // Asks user to enter a character (ex. 'c')
   cout << "Enter character:" << endl;
   // Assigns that character to variable userChar
   cin >> userChar;
   
   // Asks user to enter a string (ex. "test")
   cout << "Enter string:" << endl;
   // Assigns that string to variable userStr
   cin >> userStr;
   
   // Displays all user entered variables in order they were entered with space in between
   cout << userInt << " " << userDouble << " " << userChar << " " << userStr << endl;
   // Displays all user entered variables in reverse order with space in between
   cout << userStr << " " << userChar << " " << userDouble << " " << userInt << endl;
   
   // Casts userDouble to an int to demonstrate rounding
   cout << userDouble << " cast to an integer is " << int(userDouble) << endl;

   // Exit main code
   return 0;
}
