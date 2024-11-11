# include <iostream>

int main()
{
    int quarterSales[4];
    int totalSales = 0;

    // Get Sales Input 
    for (int i = 0; i < 4; i ++)
    {
        std::cout << "Please enter the sales for Quarter #" << i + 1 << std::endl;
        std::cin >> quarterSales[i];
    }
    std::cout << std::endl << std::endl;

    // Display quater sales and total sales 
    for (int j = 0; j < 4; j ++)
    {
        std::cout << "Sales for Quater # " << j + 1 << " $" << quarterSales[j] << std::endl;
        totalSales = totalSales + quarterSales[j];
    }

    std::cout << "Total Sales $" << totalSales << std::endl;

    return 0;
}
