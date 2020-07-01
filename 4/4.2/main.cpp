#include <iostream>

/*void noReturn(int x) // void here means no return value
{
    return 5; // error
}*/

int getValue(void) // void here means no parameters, valid but deprecated
{
    int x;
    std::cin >> x;
    return x;
}

int main()
{
    //noReturn(3);
    //std::cout << getValue();
    return 0;
}