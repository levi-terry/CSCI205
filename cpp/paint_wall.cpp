#include <iostream>
using namespace std;

int main() {

   // Variables
   int height = 0;
   int width = 0;
   double paint = 0.0;

   cout << "Enter wall height (feet):" << endl;
   cin >> height;
   cout << "Enter wall width (feet):" << endl;
   cin >> width;
   cout << "Wall area: " << height * width << " square feet" << endl;
   paint = (double(height) * double(width)) / 350.0;
   cout << "Paint needed: " << paint << " gallons" << endl;
   cout << "Cans needed: " << ((height * width) + 349) / 350 << " can(s)" << endl;

   return 0;
}
