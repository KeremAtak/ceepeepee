#include <iostream>
 
int main()
{
    int row { 1 };
    while (row <= 5)
    {
        int column = { 5 };
        while (column > 0)
        {
            if (column <= row) {
                std::cout << column << ' ';
            } else {
                std::cout << "  ";
            }
            column--;
        }
        std::cout << '\n';
        row++;
    }
    return 0;
}
