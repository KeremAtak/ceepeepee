#include <iostream>
 
enum class ErrorCode
{
    SUCCESS = 0,
    NEGATIVE_NUMBER = -1
};
 
ErrorCode doSomething(int value)
{
    // if value is a negative number
    if (value < 0)
       // early return an error code
        return ErrorCode::NEGATIVE_NUMBER;
 
    // Do whatever here
 
    return ErrorCode::SUCCESS;
}

int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
 
    if (x >= 10)
    {
        if (x <= 20)
            std::cout << x << "is between 10 and 20\n";
        else // attached to inner if statement
            std::cout << x << "is greater than 20\n";
    }

    if (doSomething(x) == ErrorCode::NEGATIVE_NUMBER)
    {
        std::cout << "You entered a negative number!\n";
    }
    else
    {
        std::cout << "It worked!\n";
    }

    std::string firstName{};
    std::string lastName{};
 
    std::cout << "First name: ";
    std::cin >> firstName;
 
    std::cout << "Last name: ";
    std::cin >> lastName;
 
    if (std::string fullName{ firstName + ' ' + lastName }; fullName.length() > 20)
    {
        std::cout << '"' << fullName << "\"is too long!\n";
    }
    else
    {
        std::cout << "Your name is " << fullName << '\n';
    }

    return 0;
}