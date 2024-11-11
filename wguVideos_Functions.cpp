#include <iostream>
#include <string>
// #include <conio.h>

 void displayPurpose();
 int getIntegers();
 int addIntegers(int, int);
 void displayAnswer(int);


int main()
{
    int x, y = 0;
    displayPurpose();   // function call, no arguments no returns 
    x = getIntegers();  // function call with return value
    y = getIntegers();  // function call wtih return value 
    int answer = addIntegers(x, y);  // x & y are the arguments -- values sent to paramenter variables of a function 
    displayAnswer(answer);  // answer is the ONLY argument -- value sent to parameter variable of a function
}
void displayPurpose()
{
    std::cout << "This program adds two integers " << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;
}
int getIntegers()
{
    int num;
    std::cout << "Please enter an integer " << std::endl;
    std::cin >> num;
    return num;
}
int addIntegers(int a, int b)  // int return & 2 int parameters 
{
    int sum = a + b;
    return sum;
}
void displayAnswer(int s)
{
    std::cout << "The sum is: " << s << std::endl;
}
