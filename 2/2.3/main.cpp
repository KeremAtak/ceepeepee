#include <iostream>

// This function takes no parameters
// It does not rely on the caller for anything
void doPrint()
{
    std::cout << "In doPrint()\n";
}
 
// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
    std::cout << x  << '\n';
}
 
// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int add(int x, int y)
{
    return x + y;
}

int getValueFromUser()
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;  
 
	return input;
}
 
void printDouble(int value) // This function now has an integer parameter
{
	std::cout << value << " doubled is: " << value * 2 << '\n';
}

//someFunction(a(), b()); // a() or b() may be called first

int doubleNumber(int number)
{
    return number * 2;
}

int main()
{   int num { getValueFromUser() };
    //printValue(add(2, 4));
    printValue(doubleNumber(num));
    return 0;
}