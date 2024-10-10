// 4.23 LAB: Interstate highway numbers
// Primary U.S. interstate highways are numbered 1-99. Odd numbers (like the 5 or 95) go north/south, and evens (like the 10 or 90) go east/west. Auxiliary highways are numbered 100-999, and service the primary highway indicated by the rightmost two digits. Thus, I-405 services I-5, and I-290 services I-90. Note: 200 is not a valid auxiliary highway because 00 is not a valid primary highway number.

// Given a highway number, indicate whether it is a primary or auxiliary highway. If auxiliary, indicate what primary highway it serves. Also indicate if the (primary) highway runs north/south or east/west.

// Ex: If the input is:

// 90
// the output is:

// I-90 is primary, going east/west.
// Ex: If the input is:

// 290
// the output is:

// I-290 is auxiliary, serving I-90, going east/west.
// Ex: If the input is:

// 0
// the output is:

// 0 is not a valid interstate highway number. 
// Ex: If the input is:

// 200
// the output is:

// 200 is not a valid interstate highway number. 


#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
   int highwayNumber;
   int primary;
   int aux;
   
   cin >> highwayNumber;

   if((highwayNumber > 0) && (highwayNumber < 100)){
      primary = highwayNumber;
   }
   if((highwayNumber <= 0) || (highwayNumber > 999)){
      cout << highwayNumber << " is not a valid interstate highway number." << endl;
   }
   else if((highwayNumber >= 100)  && (highwayNumber <= 999 &&  highwayNumber != 0)){
      aux = highwayNumber;
      int test = aux % 100;
         if(test % 2 == 0){
            cout << "I-" << aux << " is auxiliary, serving I-" << test << ", going east/west." << endl;
         }
         else if(test % 2 != 0){
            cout << "I-" << aux << " is auxiliary, serving I-" << test << ", going north/south." << endl;
         }
   }
   else if(primary % 2 == 0){
      cout << "I-" << primary << " is primary, going east/west." << endl;
   }
   else if(primary % 2 != 0){
      cout << "I-" << primary << " is primary, going north/south." << endl;
   }

   return 0;
}