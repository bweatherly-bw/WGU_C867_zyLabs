#include <iostream>
#include <iomanip>
#include <stdio.h>
// #include <conio.h>
#include <cmath>
#include <ctype.h>


int main ()
{

    int qtrsales;
    int totalSales = 0;
    double avgPerQtr = 0;

    std::cout << "This program caclulates the total sales for all four quarters. " << std::endl;
    std::cout << std::endl;

    for (int i = 0; i < 4; i ++)
    { 
        std::cout << "Please enter sales for Quarter # " << i + 1 << std::endl;
        std::cin >> qtrsales;

        totalSales = totalSales + qtrsales;
    }

    avgPerQtr = totalSales / 4;

    std::cout << std::endl;
    std::cout << "Total Sales for the Year $" << totalSales << std::endl;
    std::cout << "Average sales per quarter $" << avgPerQtr << std::endl;

}