#include <iostream>

int g_x { 2 }; // non-constant globals have external linkage by default
// g_x goes out of scope here
extern const int g_y { 3 }; // this extern gives g_y external linkage

void sayHi() // this function has external linkage, and can be seen by other files
{
    std::cout << "Hi!\n";
}
