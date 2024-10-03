// 3.30 LAB: Convert to dollars
// Given four values representing counts of quarters, dimes, nickels and pennies, output the total amount as dollars and cents.

// Output each floating-point value with two digits after the decimal point, which can be achieved by executing
// cout << fixed << setprecision(2); once before all other cout statements.

// Ex: If the input is:

// 4 3 2 1
// where 4 is the number of quarters, 3 is the number of dimes, 2 is the number of nickels, and 1 is the number of pennies, the output is:

// Amount: $1.41
// For simplicity, assume input is non-negative.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   double dollars;
   int quarters;
   int dimes;
   int nickels;
   int pennies;
   
   cin >> quarters >> dimes >> nickels >> pennies;
   
   dollars = (quarters * 0.25) + (dimes * 0.10 ) + (nickels * 0.05) + (pennies * 0.01);
   
   cout << fixed << setprecision(2);
   cout << "Amount: $" << dollars << endl;
   
   return 0;
}