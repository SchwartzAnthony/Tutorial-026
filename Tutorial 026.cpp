// Tutorial 026.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// User input 
// If over 0, so a positive number then show the number and double it
// If a negative number, remove the negative sign to show the positive 

#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int userNumber{}; 
    std::cin >> userNumber; 

    if (userNumber >= 0)
    {
        std::cout << userNumber << " " << "is a positive Integer " << " " << '\n';
        std::cout << "The doulbe of " << userNumber << " is " << userNumber * 2 << '\n';
    }
    else
    {
        std::cout << userNumber << " " << " is a negative Integer " << " " << '\n';;
        std::cout << "The positive value of " << userNumber << " is " << -userNumber << '\n';
    }

    return 0; 
}

