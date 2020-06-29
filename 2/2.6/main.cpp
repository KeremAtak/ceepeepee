#include <iostream>

void printNewlined()
{
    std::cout << "Hello "
				"world!"
				"\n"; // prints "Hello world!"

    std::cout << 3 + 4
		+ 5 + 6
		* 7 * 8
		<< "\n";
}

int main()
{
	printNewlined();
    return 0;
}