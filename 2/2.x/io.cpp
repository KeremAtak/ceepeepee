#include <iostream>
#include "io.h"

int readNumber()
{
    std::cout << "Enter a number: ";
    int number {};
    std::cin >> number;
    return number;
}

void writeAnswer(int number)
{
    std::cout << "Answer: " << number << "\n";
}
