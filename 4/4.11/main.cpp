#include <iostream>

int main()
{
    char ch1{ 'a' }; // (preferred)
    std::cout << ch1; // cout prints a character
 
    char ch2{ 98 }; // code point for 'b' (not preferred)
    std::cout << ch2; // cout prints a character ('b')
    
    std::cout << 'c';

    std::cout << '\n';


    /*char ch { 'a' };
    std::cout << ch << '\n';
    std::cout << static_cast<int>(ch) << '\n';
    std::cout << ch << '\n';*/

        std::cout << "Input a keyboard character: "; // assume the user enters "abcd" (without quotes)
 
    char ch{};
    std::cin >> ch; // ch = 'a', "bcd" is left queued.
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';
 
    // Note: The following cin doesn't ask the user for input, it grabs queued input!
    std::cin >> ch; // ch = 'b', "cd" is left queued.
    std::cout << ch << " has ASCII code " << static_cast<int>(ch) << '\n';

    return 0;
}
