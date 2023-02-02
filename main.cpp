#include <iostream>
using namespace std;

int main(){

   int a = 5;
   int b = 6;
   int temp = a;
   a = b;
   b = temp;

   cout  << "a = " << a << endl
         << "b = " << b;
}
