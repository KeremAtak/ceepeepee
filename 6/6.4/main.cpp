#include <iostream>
 
// Variables declared outside of a function are global variables
int g_x {}; // global variable g_x
 
const int g_y { 1 };  // const global variable g_y, initialized with a value
constexpr int g_z { 2 }; // constexpr global variable g_z, initialized with a value
 

void doSomething()
{
    // global variables can be seen and used everywhere in the file
    g_x = 3;
    std::cout << g_x << '\n';

    // global variables can be seen and used everywhere in the file
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';
}
 
int main()
{
    doSomething();
    std::cout << g_x << '\n';
 
    // global variables can be seen and used everywhere in the file
    g_x = 5;
    std::cout << g_x << '\n';
 
     // global variables can be seen and used everywhere in the file
    std::cout << g_y << '\n';
    std::cout << g_z << '\n';
    return 0;
}
// g_x goes out of scope here
