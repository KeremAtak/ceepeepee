#include <cstdlib> // needed for std::exit()
#include <iostream>
 
void cleanup()
{
    // code here to do any kind of cleanup required
}
 
int main()
{
    std::cout << 1 << '\n';
    cleanup();
 
    std::exit(0); // terminate and return 0 to operating system
 
    // The following statements never execute
    std::cout << 2 << '\n';
    return 0;
}