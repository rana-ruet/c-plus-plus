#include <iostream>

using namespace std;

int main() {

      // comparasion

      /* int x = 10;
      double y = 5;
      bool result = x == y;
      cout << boolalpha << result; */

      // Logical Operators

      /* int age = 20;
      bool isAdult = age > 18 && age < 65;
      bool isChildOrOld = age > 18 || age >65;
      cout << boolalpha << isAdult;
      cout << boolalpha << isChildOrOld; */

      // operator precedence

      /* bool isCitizen = true;
      bool bachelorDegree = false;
      short yearsOfExperience = 1;
      bool isEligible = isCitizen && (bachelorDegree || yearsOfExperience >= 2);
      cout << boolalpha << isEligible; */

      // if statement

      /* int sales = 15000;
      float commission;
      if (sales <= 10'000)
            commission = 0.1;
      else if (sales <= 15'000)
            commission = 0.15;
      else
            commission = 0.2;

      double total = sales * commission;
      cout << total; */

      // nested if


      // conditional operator
      /* float num1, num2;
      cout << "Enter the first number: ";
      cin >> num1;
      cout << "Enter the second number: ";
      cin >> num2;

      float large = num1 > num2 ? num1 : num2;

      // if( num1 > num2)
      //       large = num1;
      // else
      //       large = num2;

      cout << "The large number is: " << large; */


      cout << "Enter two numbers: ";
      float num1, num2;
      cin >> num1 >> num2;

      cout << "Enter an operator: ";
      char op;
      cin >> op;


      switch (op) {
      case '+':
            cout << num1 + num2;
            break;
      case '-':
            cout << num1 - num2;
            break;
      case '*':
            cout << num1 * num2;
            break;
      case '/':
            cout << num1 / num2;
            break;
      default:
            cout << "Invalied operator!";
      }

   return 0;
}
