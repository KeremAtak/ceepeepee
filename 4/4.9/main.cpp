#include <iostream>

bool isEqual(int x, int y)
{
    return (x == y); // operator== returns true if x equals y, and false otherwise
}

int main()
{
    std::cout << true << '\n'; // true evaluates to 1
    std::cout << !true << '\n'; // !true evaluates to 0
 
    /*bool b{false};
    std::cout << b << '\n'; // b is false, which evaluates to 0
    std::cout << !b << '\n'; // !b is true, which evaluates to 1*/

    bool be {};
    std::cout << be << '\n'; // false
    std::cout << !be << '\n'; // true 

    std::cout << std::boolalpha; // print bools as true or false
 
	bool b1 = 4 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b1 << '\n';
 
	bool b2 = 0 ; // copy initialization allows implicit conversion from int to bool
	std::cout << b2 << '\n';

    std::cout << "Enter an integer: ";
    int x{ 0 };
    std::cin >> x;
 
    std::cout << "Enter another integer: ";
    int y{ 0 };
    std::cin >> y;
 
    std::cout << std::boolalpha; // print bools as true or false
    
    std::cout << x << " and " << y << " are equal? \n";
    std::cout << isEqual(x, y); // will return true or false
    

    return 0;
}
