#include <iostream>
#include <string>
using namespace std;

void ReplaceStringInPlace(std::string& subject, const std::string& search,
                          const std::string& replace) {
    size_t pos = 0;
    while ((pos = subject.find(search, pos)) != std::string::npos) {
         subject.replace(pos, search.length(), replace);
         pos += replace.length();
    }
}

int main() {

   string userInput;

   cout << "Enter text:" << endl;
   getline(cin, userInput);
   
   cout << "You entered: " << userInput << endl;
   
   ReplaceStringInPlace(userInput, "BFF", "best friend forever");
   ReplaceStringInPlace(userInput, "IDK", "I don't know");
   ReplaceStringInPlace(userInput, "JK", "just kidding");
   ReplaceStringInPlace(userInput, "TMI", "too much information");
   ReplaceStringInPlace(userInput, "TTYL", "talk to you later");
   
   cout << "Expanded: " << userInput << endl;

   return 0;
}
