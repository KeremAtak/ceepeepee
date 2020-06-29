#include <iostream>
 
#define MY_NAME "Alex"
#define PRINT_JOE 
#define FOO 9 // Here's a macro substitution
#define PRINTFN

void doSomething();

int main()
{
    #ifdef PRINT_JOE
        std::cout << "Joe\n"; // if PRINT_JOE is defined, compile this code
    #endif
    
    #ifdef PRINT_BOB
        std::cout << "Bob\n"; // if PRINT_BOB is defined, compile this code
    #endif

    #ifndef PRINT_BOB
        std::cout << "Bobbie\n"; 
    #endif
 
    #ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive
        std::cout << FOO << "\n"; // This FOO gets replaced with 9 because it's part of the normal code
    #endif

    std::cout << "My name is: " << MY_NAME << "\n";
    
    doSomething();

    return 0;
}