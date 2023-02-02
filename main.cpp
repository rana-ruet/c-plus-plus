#include <iostream>
using namespace std;

int main(){
   cout << "Enter the Temperature (in Fahrenheit): ";
   double fahrenheit;
   cin >> fahrenheit;

   double celcius = (fahrenheit - 32) * 5 / 9;
   cout << "Temperature in Celcius: " << celcius;

   return 0;
}
