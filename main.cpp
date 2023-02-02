// #include <iostream>

// int main(){
//    int x = 10;
//    double y = 5;
//    double z = (x + 10) / (3 * y);

//    std::cout << z;

//    return 0;
// }

// Random Number Generator
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
   short min = 1;
   short max = 6;

   srand(time(0));

   int dice = (rand() % (max-min +1)) + min;
   cout << dice;
   return 0;
}
