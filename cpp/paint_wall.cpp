// Author: LDT
// Date: 19MAR2019
// Title: paint_wall.cpp
// Description: This program asks a user to enter the
// height and width of a wall, calculates the area of
// that wall, and determines how many gallons/cans of
// paint are needed to paint that wall.

#include <iostream>
using namespace std;

// Main body of code
int main() {

   // Variable declarations
   int height = 0;
   int width = 0;
   double paint = 0.0;

   // Asks user to enter height of wall
   cout << "Enter wall height (feet):" << endl;
   // Assigns height of wall to variable height
   cin >> height;
   
   // Asks user to enter width of wall
   cout << "Enter wall width (feet):" << endl;
   // Assigns width to variable width
   cin >> width;
   
   // Calculates and displays area of wall using area formula Length x Width
   cout << "Wall area: " << height * width << " square feet" << endl;
   
   // Assigns gallons of paint needed to variable paint
   // Assumes 1 gallon of paint covers 350 square feet of surface area
   paint = (double(height) * double(width)) / 350.0;
   
   // Displays paint/cans of paint needed to paint the wall
   cout << "Paint needed: " << paint << " gallons" << endl;
   cout << "Cans needed: " << ((height * width) + 349) / 350 << " can(s)" << endl;

   // Exit main code
   return 0;
}
