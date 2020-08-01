#include <iostream>

static int g_x; // non-constant globals have external linkage by default, but can be given internal linkage via the static keyword
 
const int g_y { 1 }; // const globals have internal linkage by default
constexpr int g_z { 2 }; // constexpr globals have internal linkage by default

static int g_a { 3 }; // this separate internal g_a is only accessible within main.cpp

int add(int x, int y); // forward declaration for function add

int main()
{
    std::cout << g_a << '\n'; // uses main.cpp's g_a, prints 3
    
    //std::cout << add(3, 4) << '\n'; This program won’t link, because function add is not accessible outside of add.cpp.

    return 0;
}
