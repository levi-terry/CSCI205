#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<double> weights(5);
   unsigned int i;
   double total = 0.0;
   double average = 0.0;
   double max = 0.0;
   
   for(i = 0; i < 5; i++){
      cout << "Enter weight " << i+1 << ":" << endl;
      cin >> weights.at(i);
   }
   
   max = weights.at(0);
   
   cout << "You entered: ";
   for(i = 0; i < 5; i++){
      total += weights.at(i);
      cout << weights.at(i) << " ";
      if(weights.at(i) > max){
         max = weights.at(i);
      }
   }
   
   cout << endl;
   
   average = total / weights.size();
   
   cout << "Total weight: " << total << endl;
   cout << "Average weight: " << average << endl;
   cout << "Max weight: " << max << endl;
      

   return 0;
}
