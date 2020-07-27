#include <iostream>
 
int main()
{
    int x{ 7 };
    int y{ 4 };
 
    std::cout << "int / int = " << x / y << '\n';
    std::cout << "double / int = " << static_cast<double>(x) / y << '\n';
    std::cout << "int / double = " << x / static_cast<double>(y) << '\n';
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << '\n';
 
    std::cout << "Enter a divisor: ";
	int z{};
	std::cin >> z;
 
	std::cout << "12 / " << z << " = " << 12 / z << '\n';

    return 0;
}
