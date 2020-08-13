#include <iostream>

int pow(int base, int exponent)
{
    int total{ 1 };
 
    for (int count{ 0 }; count < exponent; ++count)
        total *= base;
 
    return total;
}

int sumTo(int parameter)
{
    int sum{ 0 };
    for (int i { 0 }; i <= parameter; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    for (int count{ 9 }; count >= 0; --count)
        std::cout << count << ' ';

    std::cout << pow(2, 3) << '\n';

    int count=0;
    for ( ; count < 10; )
    {
        std::cout << count << ' ';
        ++count;
    }

    for (int iii{ 0 }, jjj{ 9 }; iii < 10; ++iii, --jjj)
        std::cout << iii << ' ' << jjj << '\n';

    /** 
        for (int count{ 0 }; count < 10; ++count) // count defined here
            std::cout << count << ' ';
        
        // count is not destroyed in older compilers
        
        std::cout << '\n';
        std::cout << "I counted to: " << count << '\n'; // so you can still use it here
        This use has been disallowed, but you may still see it in older code.
    **/

    for (char c{ 'a' }; c <= 'e'; ++c) // outer loop on letters
	{
		std::cout << c; // print our letter first
		
		for (int i{ 0 }; i < 3; ++i) // inner loop on all numbers
			std::cout << i;
 
		std::cout << '\n';
	}

    for (int i { 0 }; i <= 20; ++i) {
        std::cout << i << ' ';
    }
    std::cout << '\n';

    std::cout << sumTo(5) << '\n';
}
