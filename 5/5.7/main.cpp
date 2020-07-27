#include <iostream>
 
int main()
{
    int x { 5 };
    int y { 7 };
 
    if (! x > y) // evaluates as  (!x) > y
        std::cout << "x is not greater than y\n";
    else
        std::cout << "x is equal to or greater than y\n";
    
    if (!(x > y))
        std::cout << "x is not greater than y\n";
    else
        std::cout << "x is equal to or greater than y\n";

    int a { 1 };
    int b { 2 };

    if (a == 1 && ++b == 2) {
        std::cout << "a is " << a << "\n";
        std::cout << "b is " << b << "\n";  
    } else {
        std::cout << "Short circuit evaluation!\n";
    }
    return 0;
}
