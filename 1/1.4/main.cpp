#include <iostream>

int main()
{
    int width;
    
    std::cout << width;
    std::cout << "\n";

    width = 5;
	std::cout << width;
    std::cout << "\n";

    width = 7;
    std::cout << width;
    std::cout << "\n";

    int height = 10;
    std::cout << height;
    std::cout << "\n";

    int ei( 200 );
    std::cout << ei;
    std::cout << "\n";

    //C++11
    int bii{ 14 };
    std::cout << bii;
    std::cout << "\n";

    int a = 5, b = 6; // copy initialization
    int c( 7 ), d( 8 ); // direct initialization
    int e{ 9 }, f{ 10 }; // brace initialization (preferred)
    
    std::cout << a;
    std::cout << b;
    std::cout << c;
    std::cout << d;
    std::cout << e;
    std::cout << f;

	return 0;
}
