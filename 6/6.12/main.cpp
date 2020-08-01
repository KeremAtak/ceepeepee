#include <iostream>

namespace a
{
	int x{ 10 };
}
 
namespace b
{
	int x{ 20 };
}

int main()
{
    using std::cout; // this using declaration tells the compiler that cout should resolve to std::cout
    cout << "Hello world!\n"; // so no std:: prefix is needed here!

    using namespace a;
    using namespace b;

    //cout << x << '\n';
    cout << a::x << '\n';
    cout << b::x << '\n';

    return 0;
} // the using declaration expires here