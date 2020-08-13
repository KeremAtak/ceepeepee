#include <iostream>
 
int main()
{
    int counter { 97 };
    while (counter <= 122)
    {
        std::cout << char(counter) << '\n';
        counter++;
    }
    return 0;
}