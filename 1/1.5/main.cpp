#include <iostream> // for std::cout
 
int main()
{
    std::cout << "Hello" << " world!\n";

    int x{ 5 };
    std::cout << x << " is equal to 5!" << std::endl; //endl not preferred

    std::cout << "Enter a number: "; // ask user for a number
    int y{ }; // define variable x to hold user input (and zero-initialize it)
    std::cin >> y; // get number from keyboard and store it in variable x
    std::cout << "You entered " << y << '\n';

    return 0;
}