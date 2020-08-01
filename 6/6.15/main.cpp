#include <iostream>
#include <iomanip>

int main()
{
    int i{ 30000 };
    char c = i; // chars have range -128 to 127
 
    std::cout << static_cast<int>(c) << '\n';

    int j{ 2 };
    short s = j; // convert from int to short
    std::cout << s << '\n';
 
    double d{ 0.1234 };
    float f = d;
    std::cout << f << '\n';

    float f1 = 0.123456789; // double value 0.123456789 has 9 significant digits, but float can only support about 7
    std::cout << std::setprecision(9) << f1 << '\n'; // std::setprecision defined in iomanip header

    int k{ 10 };
    float f2 = k;
    std::cout << f2 << '\n';

    int l = 3.5;
    std::cout << l << '\n';

    double e{ 10.0 };
    //int m{ e }; Error: A double can store values that don't fit into an int

    short a{ 4 };
    short b{ 5 };
    std::cout << typeid(a + b).name() << ' ' << a + b << '\n'; // show us the type of a + b

    double d2{ 4.0 };
    short s2 { 2 };
    std::cout << typeid(d2 + s2).name() << ' ' << d2 + s2 << '\n'; // show us the type of d2 + s2

    std::cout << 5u - 10 << '\n'; // 5u means treat 5 as an unsigned integer

    return 0;
}