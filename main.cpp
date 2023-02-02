#include <iostream>
using namespace std;

int main(){
   cout << "Enter the radius of the circle: ";
   double radius;
   cin >> radius;
   const double PI = 3.1416;

   double area = PI * radius * radius;
   cout << "Area of the circle: " << area;

   return 0;
}
