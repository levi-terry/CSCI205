// Author: LDT
// Date: 23MAR2019
// Title: descending_int_vector.cpp
// Description: This program creates an integer vector of a user specified size,
// has the user fill the vector with integers, then orders the vector from
// largest to smallest.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
   // Variables
   std::vector<int> numbers;
   int numSize;
   int i; // for indexing purposes
   
   // Ask user to enter size of vector, assign to variable
   cout << "Enter the number of integers in your vector:" << endl;
   cin >> numSize;
   
   // Resize vector to user specified size
   numbers.resize(numSize);
   
   // Loop to ask user for numbers to fill vector
   cout << "Enter the numbers: ";
   for(i = 0; i < numSize; i++){
      cin >> numbers.at(i);
   }
   
   // Sort vector
   std::sort(numbers.begin(), numbers.end());
   
   // Reverse vector
   std::reverse(numbers.begin(), numbers.end());
   
   // Print re-ordered vector
   cout << "The numbers arranged in descending order are given below:" << endl;
   for(i = 0; i < numSize; i++){
      cout << numbers.at(i) << endl;
   }
   

   return 0;
}
