#include <iostream>
#include <cstdlib> // for std::rand() and std::srand()
#include <ctime> // for std::time()

unsigned int PRNG()
{
    // our initial starting seed is 5323
    static unsigned int seed{ 5323 };
 
    // Take the current seed and generate a new value from it
    // Due to our use of large constants and overflow, it would be
    // hard for someone to casually predict what the next number is
    // going to be from the previous one.
    seed = 8253729 * seed + 2396403;
 
    // Take the seed and return a value between 0 and 32767
    return seed % 32768;
}

unsigned int PRNG2()
{
    std::srand(5323); // set initial seed value to 5323
    return std::rand();
}

unsigned int PRNG3()
{
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // set initial seed value to system clock
    return std::rand();
}

int getRandomNumber(int min, int max)
{
    static constexpr double fraction { 1.0 / (RAND_MAX + 1.0) };  // static used for efficiency, so we only calculate this value once
    // evenly distribute the random number across our range
    return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

int main()
{
    std::cout << PRNG() << '\n';
    std::cout << PRNG2() << '\n';
    std::cout << PRNG3() << '\n';

    std::cout << getRandomNumber(1, 6) << '\n';
    return 0;   
}
