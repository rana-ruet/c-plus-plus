#include <iostream>

using namespace std;

/*
void greet(string name) {
    cout << "Hello " << name << endl;
}

string fullName (string firstName, string lastName) {

    return firstName + " " + lastName;
}

int maxInt (int num1, int num2) {

    return num1 > num2 ? num1 : num2;
}

 */

// default value
/*
double calculateTax (double income, double tax = 0.2) {
    return income * tax;
}
 */

// overloading function
// if more than one function have same name but different parameter
// signature = name + (number and type of parameter)
// overloading function must have different signature
/*
void greet(string name) {
      cout << "Hello " << name ;
}

void greet(string title, string name) {
      cout << "Hello " << title << " " << name ;
}

 */

// passing argument by value or reference
// by default c++ use , value

//example by reference
/*
void increasedPrice (double& price) {
      price *= 0.2;
}


int main() {
      double price = 100;
      increasedPrice(price);
      cout << price;
      return 0;
}
 */


// Global variable vs Local variable

/*
// Global variable (global scope)
const double taxRate = 0.2;
double calculateTax(double income) {
      return income * taxRate;
}

int main () {
      // Local variable (local scope)
      int income = 10000;
      cout << calculateTax(income);

      return 0;
}
 */

/* // function declaration (function prototype)
void greet(string name);

int main () {
      greet("Rana");

      return 0;
}

// function defination

void greet(string name) {
      cout << "Hello " << name;
}
 */

// organizing code in different file
/* #include "./utils/greet.hpp"

using greeting::greet;
int main() {
      greet("Rana");
      return 0;
}
 */


void printingOdd (int limit) {
      for(int i = 0; i < limit; i ++)
            if (i % 2 != 0)
                  cout << i << endl;
}


int main () {
      printingOdd(10);
      return 0;
}
