#include "math.h"

double calculateResult(double x, double y, char c)
{
    double result {};
    if (c == '+')
        result = x + y;
    else if (c == '-')
        result = x - y;
    else if (c == '*')
        result = x * y;
    else if (c == '/')
        result = x / y;
    else 
        return false;
    return result;
}
