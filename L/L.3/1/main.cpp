#include <iostream>
 
int calculate(int x, int y, char operation)
{
    switch (operation)
    {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        case '%':
            return x % y;
        default:
            std::cout << "calculate(): Unhandled case\n";
            return 0;
    }
}
 
int main()
{
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;
 
    std::cout << "Enter another integer: ";
    int y{};
    std::cin >> y;
 
    std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
    char operation{};
    std::cin >> operation;
 
    std::cout << x << ' ' << operation << ' ' << y << " is " << calculate(x, y, operation) << '\n';
 
    return 0;
}
