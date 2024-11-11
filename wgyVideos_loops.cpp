#include <iostream>

int main()
{
    int limit;      // variable to store the number of items in the list
    int number;     // variable to store the number 
    int sum;        // variable to store the sum
    int counter;    // loop control variable 

    std::cout << "Enter the number of digits you are adding " << std::endl;
    std::cin >> limit;

    sum = 0;
    counter = 0;

    while (counter < limit)
    {
        std::cout << "Enter a digit # " << counter + 1 << std::endl;
        std::cin >> number;
        sum = sum + number;
        counter++;
    }

    if (counter != 0 )
        std::cout << "The average = " << sum / counter << std::endl;
    else
        std::cout << "Line 13: No Input." << std::endl;


    return 0;
}