#include <iostream>

int getClassSize(bool inBigClassroom)
{
    if (inBigClassroom)
        return 30;
    else
        return 20;
}

int main()
{
    int x{ 1 };
    int y{ 2 };
 
    std::cout << (++x, ++y) << "\n"; // increment x and y, evaluates to the right operand
    
/** 
 *  bool inBigClassroom { false };
    if (inBigClassroom)
        const int classSize { 30 };
    else
        const int classSize { 20 };
    std::cout << "The class size is: " << classSize;
    However, this won’t compile, and you’ll get an error message that classSize isn’t defined. 
    Much like how variables defined inside functions die at the end of the function, 
    variables defined inside an if or else statement die at the end of the if or else statement. Thus, classSize has already been destroyed by the time we try to print it.


    **/
    const int classSize { getClassSize(false) };
    std::cout << "The class size is: " << classSize << "\n";

    int x = 5;
	// std::cout << (x != 5 ? x : "x is 5"); won't compile

    return 0;
}
