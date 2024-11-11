#include <iostream>
#include <iomanip>
#include <stdio.h>
// #include <conio.h>
#include <cmath>
#include <ctype.h>


int main ()
{
    std::string username;
    std::string password;
    int attempts;
    bool login = false;

    attempts = 0;

    do {
        std::cout << "Enter your username: ";
        std::cin >> username;
        std::cout << "Enter your password: ";
        std::cin >> password;
        std::cout << std::endl;

        attempts = attempts + 1;
        if (password == "password")
            login = true;
         else 
        std::cout << "Incorrect username and/or password you have " << 3 - attempts << " remaining" << std::endl << std::endl;   
    }   while ((attempts < 3) && (login == false));

    if (login == false)
        std::cout << "Unsuccessful login. Contact administrator " << std::endl << std::endl;
    else 
        std::cout << "Successful login" << std::endl << std::endl;


    return 0;
}