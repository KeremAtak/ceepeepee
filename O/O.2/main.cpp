#include <bitset>
#include <iostream>

int main()
{
    /**std::bitset<4> x { 0b1100 };
 
    std::cout << x << '\n';
    std::cout << (x >> 1) << '\n'; // shift right by 1, yielding 0110
    std::cout << (x << 1) << '\n'; // shift left by 1, yielding 1000**/
 
    unsigned int x { 0b0100 };
    x = x << 1; // use operator<< for left shift
    std::cout << std::bitset<4>{ x }; // use operator<< for output
 
    std::cout << std::bitset<4>{ ~0b0100u } << ' ' << std::bitset<8>{ ~0b0100u } << "\n"; //bitwise NOT

    std::cout << (std::bitset<4>{ 0b0101 } | std::bitset<4>{ 0b0110 }) << "\n"; //bitwise OR

    std::cout << (std::bitset<4>{ 0b0101 } & std::bitset<4>{ 0b0110 }) << "\n"; //bitwise AND

    std::cout << (std::bitset<4>{ 0b0101 } ^ std::bitset<4>{ 0b0110 }) << "\n"; //bitwise XOR

    std::bitset<4> bits { 0b0100 };
    bits >>= 1; //same as x = x >> 1
    std::cout << bits;

    return 0;   
}
