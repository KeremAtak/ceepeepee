#include <iostream>

void postfix_increment()
{
    int x { 5 };
    int y = x++; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y
 
    std::cout << x << ' ' << y;
}

void prefix_increment()
{
    int x { 5 };
    int y = ++x; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y
 
    std::cout << x << ' ' << y;
}

int add(int x, int y)
{
    return x + y;
}


int main()
{
    prefix_increment();
    postfix_increment();
    int x{ 5 };
    int value = add(x, ++x); // is this 5 + 6, or 6 + 6?
    // It depends on what order your compiler evaluates the function arguments in
 
    std::cout << value; // value could be 11 or 12, depending on how the above line evaluates!
    return 0;
}
