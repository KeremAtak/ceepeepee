#include <iostream>
#include "io.h"
#include "math.h"

int main()
{
    double x { readValue() };
    double y { readValue() };
    char c { readCharacter() };
    double result { calculateResult(x, y, c) };
    
    writeResult(x, y, c, result);

    return 0;
}
