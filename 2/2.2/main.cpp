#include <iostream>
 
int getValueFromUser() // this function now returns an integer value
{
 	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;  
 
	return input; // return the value the user entered back to the caller
}

void printA()
{
    std::cout << "A\n";
}

int main()
{
	int num1 { getValueFromUser() }; // initialize num with the return value of getValueFromUser()
    int num2 { getValueFromUser() };

	std::cout << num1 << " times " << num2 << " is " << num1 * num2 << '\n';
    // std::cout << printA() << '\n'; won't compile..

	return 0;
}   