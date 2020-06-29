#include <iostream> // for std::cout
 
// Definition of user-defined function doPrint()
void doPrint() // doPrint() is the called function in this example
{
    std::cout << "In doPrint()\n";
}
 
void doB()
{
    std::cout << "In doB()\n";
}

void doA()
{
    std::cout << "Starting doA()\n";
    doB();
    std::cout << "Ending doA()\n";
}

// Definition of function main()
int main()
{
    std::cout << "Starting main()\n";
    doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
    doPrint(); // second time..
    doA();
    doB();

    /*int foo() // Illegal: this function is nested inside function main()
    {
        std::cout << "foo!\n";
        return 0;
    }
    foo(); // function call to foo()*/

    std::cout << "Ending main()\n"; // this statement is executed after doPrint() ends
 
    return 0;
}