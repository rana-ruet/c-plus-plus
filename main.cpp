#include <iostream>
using namespace std;

int main(){
   double sales = 95000;
   cout << "Total Sales = $" << sales <<endl;

   double stateTaxRate = 0.04;
   double stateTax = sales * stateTaxRate;
   cout << "State Tax = $" << stateTax <<endl;

   double countryTaxRate = 0.02;
   double countryTax = sales * countryTaxRate;
   cout << "Country Tax = $" << countryTax <<endl;

   double totalTax = stateTax +countryTax;
   cout << "Total tax = $" << totalTax <<endl;

   return 0;
}
