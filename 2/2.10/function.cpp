#include <iostream>
 
void doSomething()
{
#ifdef PRINTFN
    std::cout << "Printing!\n";
#endif
#ifndef PRINTFN
    std::cout << "Not printing!\n";
#endif
}
