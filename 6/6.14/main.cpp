#include <iostream>

auto add3(int x, int y) -> int
{
  return (x + y);
}

auto add2(int x, int y)
{
    return x + y;
}

int add(int x, int y)
{
    return x + y;
}

int main()
{
    auto d{ 5.0 }; // 5.0 is a double literal, so d will be type double
    auto i{ 1 + 2 }; // 1 + 2 evaluates to an int, so i will be type int
    auto sum { add(5, 6) }; // add() returns an int, so sum's type will be deduced to int
    auto sum2 { add2(9, 6) }; // add() returns an int, so sum's type will be deduced to int
    auto sum3 { add3(9, 9) }; // add() returns an int, so sum's type will be deduced to int

    std::cout << sum << '\n';
    std::cout << sum2 << '\n';
    std::cout << sum3 << '\n';

    return 0;
}
