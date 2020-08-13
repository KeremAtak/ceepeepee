#include <iostream>

enum class Color
{
    black,
    white,
    red,
    green,
    blue 
};

void printColor(Color color)
{
    switch (color)
    {
        case Color::black:
            std::cout << "Black";
            break;
        case Color::white:
            std::cout << "White";
            break;
        case Color::red:
            std::cout << "Red";
            break;
        case Color::green:
            std::cout << "Green";
            break;
        case Color::blue:
            std::cout << "Blue";
            break;
        default:
            std::cout << "Unknown";
            break;
    }
    std::cout << '\n';
}

bool isDigit(char c)
{
    switch (c)
    {
        case '0': // if c is 0
        case '1': // or if c is 1
        case '2': // or if c is 2
        case '3': // or if c is 3
        case '4': // or if c is 4
        case '5': // or if c is 5
        case '6': // or if c is 6
        case '7': // or if c is 7
        case '8': // or if c is 8
        case '9': // or if c is 9
            return true; // then return true
        default:
            return false;
    }
}

int main()
{
    printColor(Color::green);

    /**switch (x)
    {
        case 4:
        case 4:  // illegal -- already used value 4!
        case Color::blue: // illegal, Color::blue evaluates to 4!
    }**/

    std::cout << isDigit('2') << '\n';
    switch (2)
    {
        case 1: // Does not match
            std::cout << 1 << '\n'; // skipped
        case 2: // Match!
            std::cout << 2 << '\n'; // Execution begins here
        case 3:
            std::cout << 3 << '\n'; // This is also executed
        case 4:
            std::cout << 4 << '\n'; // This is also executed
        default:
            std::cout << 5 << '\n'; // This is also executed
    }

    switch (2)
    {
    case 1: // Does not match -- skipped
        std::cout << 1 << '\n';
        break;
    case 2: // Match!  Execution begins at the next statement
        std::cout << 2 << '\n'; // Execution begins here
        break; // Break terminates the switch statement
    case 3:
        std::cout << 3 << '\n';
        break;
    case 4:
        std::cout << 4 << '\n';
        break;
    default:
        std::cout << 5 << '\n';
        break;
    }

    switch (1)
    {
        case 1:
            std::cout << 1;
            std::cout << 2;
            std::cout << '\n';
            break;
        default:
            std::cout << "default case\n";
            break;
    }
    
    switch (2)
    {
        int a; // okay, declaration is allowed before the case labels
        //int b{ 5 }; // illegal, initialization is not allowed before the case labels
        case 1:
            int y; // okay, declaration is allowed within a case
            y = 4; // okay, this is an assignment
            break;

        case 2:
            y = 5; // okay, y was declared above, so we can use it here too
            std::cout << y << '\n';
            break;

        case 3:
            //int z{ 4 }; // illegal, initialization is not allowed within a case
            break;

        default:
            std::cout << "default case\n";
            break;
    }

    switch (1)
    {
        case 1:
        { // note addition of block here
            int x{ 4 }; // okay, variables can be initialized inside a block inside a case
            std::cout << x << '\n';
            break;
        }
        default:
            std::cout << "default case\n";
            break;
    }

    return 0;
}
