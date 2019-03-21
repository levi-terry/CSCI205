// Author: LDT
// Date: 19MAR2019
// Title: text_decoder_2.cpp
// Description: This program looks at a user defined string
// and outputs text messaging abbreviations used in that string.

#include <iostream>
#include <string>
using namespace std;

int main() {

    string userStr;

    cout << "Enter text:" << endl;
    getline(cin, userStr);
    cout << "You entered: " << userStr << endl;

    if(userStr.find("BFF") != string::npos){
        cout << "BFF: best friend forever" << endl;
    }

    if(userStr.find("IDK") != string::npos){
        cout << "IDK: I don't know" << endl;
    }

    if(userStr.find("JK") != string::npos){
        cout << "JK: just kidding" << endl;
    }

    if(userStr.find("TMI") != string::npos){
        cout << "TMI: too much information" << endl;
    }

    if(userStr.find("TTYL") != string::npos){
        cout << "TTYL: talk to you later" << endl;
    }

    return 0;
}