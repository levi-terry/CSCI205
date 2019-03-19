#include <iostream>
#include <string>
using namespace std;

int main() {

   int userInt = 0;
   double userDouble = 0.0;
   char userChar;
   string userStr;

   cout << "Enter integer:" << endl;
   cin >> userInt;
   cout << "Enter double:" << endl;
   cin >> userDouble;
   cout << "Enter character:" << endl;
   cin >> userChar;
   cout << "Enter string:" << endl;
   cin >> userStr;
   cout << userInt << " " << userDouble << " " << userChar << " " << userStr << endl;
   cout << userStr << " " << userChar << " " << userDouble << " " << userInt << endl;
   
   cout << userDouble << " cast to an integer is " << int(userDouble) << endl;

   return 0;
}
