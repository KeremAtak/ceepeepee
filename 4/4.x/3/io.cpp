#include <iostream>
#include "io.h"

double readValue() 
{
    std::cout << "Enter a double value: ";
    double value {};
    std::cin >> value;

    return value;
}

char readCharacter() 
{
    std::cout << "Enter one of the following: +, -, *, or /: \n";
    char c {};
    std::cin >> c;
    
    return c;
}

void writeResult(double x, double y, char c, double result) 
{
    std::cout << x << " " << c  << " " << y << " is " << result << "\n";
}
