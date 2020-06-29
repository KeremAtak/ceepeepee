#include <iostream> // for std::cout
 
void doNothing(int&)
{
}

int main()
{

    int x;
    //should give something random
    std::cout << x << "\n";

    int y;
    doNothing(y);

    //this as well
    std::cout << y << "\n";
    return 0;
}