// 4.22 LAB: Smallest number
// Write a program whose inputs are three integers, and whose output is the smallest of the three values.

// Ex: If the input is:

// 7 15 3
// the output is:

// 3

#include <iostream>
using namespace std;


int main()
{  
   int number1;
   int number2;
   int number3;
   
   
   cin >> number1 >> number2 >> number3;
   
   if (number1 < number2 && number1 < number3) {
      cout << number1 << endl;
   }
   else if (number2 < number1 && number2 < number3) {
      cout << number2 << endl;
   }
   else {
      cout << number3 << endl;
   }

    return 0;
}