#include <iostream>

// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}
  

int main()
{
    std::cout << "Enter an integer: ";
    int x {};
    std::cin >> x;
 
    if (x > 0)
        std::cout << "The value is positive\n";
    else if (x < 0)
        std::cout << "The value is negative\n";
    else 
        std::cout << "The value is zero\n";
    
std::cout << "Enter an integer: ";
    std::cin >> x;
 
    std::cout << "Enter another integer: ";
    int y {};
    std::cin >> y;
    
    if (isEqual(x, y))
        std::cout << x << " and " << y << " are equal\n";
    else
        std::cout << x << " and " << y << " are not equal\n";

    return 0;
}
