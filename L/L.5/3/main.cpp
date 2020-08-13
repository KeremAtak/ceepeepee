#include <iostream>
 
int main()
{
    int height { 5 };
    while (height > 0)
    {
        int width = height;
        while (width > 0)
        {
            std::cout << width << " ";
            width--;
        }
        std::cout << '\n';
        height--;
    }
    return 0;
}
