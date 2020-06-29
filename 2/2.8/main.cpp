#include <iostream>

//g++ -std=c++11 -o main main.cpp add.cpp

/*int add(int x, int y);

int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // compile error
    return 0;
}*/
 
int getInteger();
 
int main()
{
	int x{ getInteger() };
	int y{ getInteger() };
 
	std::cout << x << " + " << y << " is " << x + y << '\n';
	return 0;
}
