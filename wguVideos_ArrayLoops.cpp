#include <iostream>
#include <ctype.h>


int main()
{
    int quarterSales[4];

    quarterSales[0] = 23003;
    quarterSales[1] = 37943;
    quarterSales[2] = 45644;
    quarterSales[3] = 67899;

    // std::cout << quarterSales[2];    // This is calling for a spectific item in the array 

    std::cout << "Sales for Quarter #1 $" << quarterSales[0] << std::endl;
    std::cout << "Sales for Quarter #2 $" << quarterSales[1] << std::endl;
    std::cout << "Sales for Quarter #3 $" << quarterSales[2] << std::endl;
    std::cout << "Sales for Quarter #4 $" << quarterSales[3] << std::endl;

    std::cout << std::endl;

    std::cout << "Total Sales: $" << quarterSales[0] + quarterSales[1] + quarterSales[2] + quarterSales[3] << std::endl;
    std::cout << "Average Sales: $" << (quarterSales[0] + quarterSales[1] + quarterSales[2] + quarterSales[3]) / 4 << std::endl;
    return 0;
}