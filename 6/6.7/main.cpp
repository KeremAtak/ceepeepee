#include <iostream>

extern int g_x; // this extern is a forward declaration of a variable named g_x that is defined somewhere else
extern const int g_y; // this extern is a forward declaration of a const variable named g_y that is defined somewhere else

void sayHi(); // forward declaration for function sayHi, makes sayHi accessible in this file
 
 
int inita();  // forward declaration
int initb();  // forward declaration
 
int g_a{ inita() }; // g_a is initialized first
int g_b{ initb() };
 
int inita()
{
    return g_b; // g_b isn't initialized when this is called
}
 
int initb()
{
  return 5;
}

int main()
{
    std::cout << g_x << '\n'; // prints 2
    std::cout << g_y << '\n'; // prints 2

    sayHi(); // call to function defined in another file, linker will connect this call to the function definition

    std::cout << g_a << ' ' << g_b << '\n';

    return 0;
}
// the forward declaration for g_x goes out of scope here