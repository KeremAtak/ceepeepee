#include <iostream> 
#include "circle.h" // for basicMath::pi
#include "growth.h" // for basicMath::e
#include "add.h" // for basicMath::add()

void print() // this print lives in the global namespace
{
	std::cout << " there\n";
}

namespace foo // define a namespace named foo
{
    // This doSomething() belongs to namespace foo
    int doSomething(int x, int y)
    {
        return x + y;
    }

    void print() // this print lives in the foo namespace
	{
		std::cout << "Hello";
	}

    namespace goo // goo is a namespace inside the foo namespace
    {
        int add(int x, int y)
        {
            return x + y;
        }
    }
}
 
namespace goo // define a namespace named goo
{
    // This doSomething() belongs to namespace goo
    int doSomething(int x, int y)
    {
        return x - y;
    }
}

namespace doo::goo // goo is a namespace inside the foo namespace (C++17 style)
{
  int add(int x, int y)
  {
    return x + y;
  }
}

int main()
{
    std::cout << foo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace foo
    std::cout << goo::doSomething(4, 3) << '\n'; // use the doSomething() that exists in namespace goo

	foo::print(); // call foo::print()
	::print(); // call print() in global namespace (same as just calling print() in this case)
    
    std::cout << basicMath::pi << '\n';
    std::cout << basicMath::e << '\n';

    std::cout << basicMath::add(4, 3) << '\n';
    std::cout << foo::goo::add(1, 2) << '\n';

    std::cout << doo::goo::add(1, 7) << '\n';

    namespace boo = doo::goo; // boo now refers to doo::goo
    std::cout << boo::add(7, 7) << '\n';

    return 0;
}
