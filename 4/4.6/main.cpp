#include <iostream>
#include <cstdint>
 
int main()
{
    std::int16_t i{5};
    std::cout << i;

    std::cout << "fast 8: " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";
 
	std::cout << "least 8: " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";

    std::int8_t myint{0};
    std::int8_t myint2{64};
    std::int8_t myint3{65};

    std::cout << myint << "\n";
    std::cout << myint2 << "\n";
    std::cout << myint3 << "\n";

    std::cout << sizeof(int) << '\n';

    return 0;
}