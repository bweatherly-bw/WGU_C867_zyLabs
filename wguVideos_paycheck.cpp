// Libraries
#include <iostream>
#include <iomanip>

int main ()
{
    // Variables 
    int hours = 0;
    int hoursTimeHalf = 0;
    int hoursDouble = 0;
    std::string strEmployeeFirstName;
    std::string strEmployeeLastName;
    float payrate = 0;
    float payCheckAmount = 0;

    // Input
    std::cout << "Please enter the Employee's First Name: ";
    std::cin >> strEmployeeFirstName;
    std::cout << "Please Enter the Employee's Last Name: ";
    std::cin >> strEmployeeLastName;
    std::cout << "PLease Enter the Employee's Pay Rate ";
    std::cin >> payrate;
    std::cout << "Please Enter the Employee's Hours Worked: ";
    std::cin >> hours;

    // Processing 
    if(hours <= 40){
        payCheckAmount = hours * payrate;
    }
    else if(hours > 40 && hours <= 50) {
        hoursTimeHalf = hours - 40;
        payCheckAmount = 40 * payrate + (float) hoursTimeHalf * payrate * 1.5;
    }
    else{
        hoursDouble = hours - 50;
        payCheckAmount = 40 * payrate + 10.0 * payrate * 1.5 + (float) hoursDouble * payrate * 2;
    }

    // Output 
    // std::cout << fixed << setprecision(2);
    std::cout << "Employee Name: " << strEmployeeFirstName << " " << strEmployeeLastName << '\n';
    // std::cout << "Paycheck Amount $" << payCheckAmount << "\n\n";
    
    std::cout << "Paycheck Amount $" << std::fixed << std::setprecision(2) << payCheckAmount << "\n\n";

    return 0;
}