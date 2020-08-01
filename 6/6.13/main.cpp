#include <iostream>
#include <vector>

using pairlist_t = std::vector<std::pair<std::string, int> >; // make pairlist_t an alias for this crazy type
 
pairlist_t pairlist; // instantiate a pairlist_t variable
 
bool hasDuplicates(pairlist_t pairlist) // use pairlist_t in a function parameter
{
    // some code here
    return 0;
}

int main()
{
    typedef long miles_t;
    typedef long speed_t;
 
    miles_t distance { 5 };
    speed_t mhz  { 3200 };
 
    // The following is valid, because distance and mhz are both actually type long
    distance = mhz;

    std::cout << distance << '\n';

    std::int8_t i{ 97 }; // int8_t is actually a type alias for signed char
    std::cout << i << '\n';
 
    return 0;
    return 0;
}