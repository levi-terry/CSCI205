#include <iostream>
#include <string> // Note: This library is needed to use the string type
using namespace std;

int main() {

   string userStr;
   
   cout << "Input an abbreviation:" << endl;
   cin >> userStr;
   if(userStr == "BFF"){
      cout << "best friends forever" << endl;
   }
   else if(userStr == "LOL"){
      cout << "laughing out loud" << endl;
   }
   else if(userStr == "IMHO"){
      cout << "in my humble opinion" << endl;
   }
   else if(userStr == "TMI"){
      cout << "too much information" << endl;
   }
   else if(userStr == "IDK"){
      cout << "I don't know" << endl;
   }
   else{
      cout << "Unknown" << endl;
   }

   return 0;
}
