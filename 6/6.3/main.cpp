#include <iostream>

/**void someFunction(int x)
{
    int x{}; // compilation failure due to name collision with function parameter
}**/
 
int main()
{ // outer block
 
    int x { 5 }; // x enters scope and is created here
 
    { // nested block
        int y { 7 }; // y enters scope and is created here

        // x and y are both in scope here
        std::cout << x << " + " << y << " = " << x + y << '\n';

        std::cout << x << '\n';

    } // y goes out of scope and is destroyed here
 
    // y can not be used here because it is out of scope in this block

    {
        int x { 3 }; // this identifier x refers to a different object than the previous x
        std::cout << x << '\n';
    }

    std::cout << x << '\n';



    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;
 
    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;
 
    // if user did it wrong
    if (smaller > larger)
    {
        // swap values of smaller and larger
        std::cout << "Swapping the values\n";
 
        int temp{ larger };
        larger = smaller;
        smaller = temp;
    } // temp dies here
 
    std::cout << "The smaller value is: " << smaller << '\n';
    std::cout << "The larger value is: " << larger << '\n';

    return 0;
} // x goes out of scope and is destroyed here
