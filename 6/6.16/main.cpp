#include <iostream>

int main()
{
    int i1 { 10 };
    int i2 { 4 };
    float f1(i1 / i2); // List initialization would prevent this. Direct initialization is used for demonstration only.
    
    float f2 { (float)i1 / i2 };
    float f3 { float(i1) / i2 };

    std::cout << f1 << '\n';
    std::cout << f2 << '\n';
    std::cout << f3 << '\n';

    char c1 { 'a' };
    std::cout << c1 << ' ' << static_cast<int>(c1) << '\n'; // prints a 97

    // convert an int to a float so we get floating point division rather than integer division
    float f4 { static_cast<float>(i1) / i2 }; 
    std::cout << f4 << '\n'; 

    int i3 { 48 };
    char c2 = i3; // implicit conversion
    std::cout << c2 << '\n';

    // explicit conversion from int to char, so that a char is assigned to variable c3
    char c3 { static_cast<char>(i3) };
    std::cout << c3 << '\n';

    int i4 { 100 };
    i4 = i4 / 2.5;
    std::cout << i4 << '\n';

    i4 = 100;
    i4 = static_cast<int>(i4 / 2.5);
    std::cout << i4 << '\n';

    return 0;
}
