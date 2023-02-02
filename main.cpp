#include <iostream>
using namespace std;

int main(){
   cout << "Enter the radius of the circle: ";
   double radius;
   cin >> radius;

   double area = 3.1416 * radius * radius;
   cout << "Area of the circle: " << area;

   return 0;
}
