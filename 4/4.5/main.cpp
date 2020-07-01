#include <iostream>

int main()
{
    /*unsigned short x{ 65535 }; // largest 16-bit unsigned value possible
    std::cout << "x was: " << x << '\n';
 
    x = 65536; // 65536 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
 
    x = 65537; // 65537 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n'; */

    unsigned short x{ 0 }; // smallest 2-byte unsigned value possible
    std::cout << "x was: " << x << '\n';
 
    x = -1; // -1 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
 
    x = -2; // -2 is out of our range, so we get wrap-around
    std::cout << "x is now: " << x << '\n';
    
    unsigned int x1{ 3 };
	unsigned int y{ 5 };
 
	std::cout << x1 - y << '\n';
    
	return 0;

    return 0;
}