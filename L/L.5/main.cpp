#include <iostream>
 
int main()
{
    int count{ 0 };
    while (count < 10)
    {
      std::cout << count << ' ';
      ++count;
    }
    std::cout << "done!\n";

    {
        int count{ 15 };
        while (count < 10)
        {
        std::cout << count << ' ';
        ++count;
        }
        std::cout << "done!\n";
    }
    
    /**{
        int count{ 0 };
        while (count < 10) // this condition will never be false
        {
            std::cout << count << ' '; // so this line will repeatedly execute
        }
    
        return 0; // this line will never execute
    }**/

    /**{
        unsigned int count{ 10 };
 
        // count from 10 down to 0
        while (count >= 0)
        {
            if (count == 0)
            {
                std::cout << "blastoff!";
            }
            else
            {
                std::cout << count << ' ';
            }
            --count;
        }
    }**/
    {
        int count{ 1 };
        int sum{ 0 }; // sum is declared up here because we need it later (beyond the loop)
    
        while (count <= 5) // iterate 5 times
        {
            int x{}; // x is created here with each iteration
    
            std::cout << "Enter integer #" << count << ':';
            std::cin >> x;
    
            sum += x;
    
            // increment the loop counter
            ++count;
        } // x is destroyed here with each iteration
    
        std::cout << "The sum of all numbers entered is: " << sum << '\n';
    }

    {
    int outer{ 1 };
        while (outer <= 5)
        {
            // loop between 1 and outer
            int inner{ 1 };
            while (inner <= outer)
            {
                std::cout << inner++ << ' ';
            }
    
            // print a newline at the end of each row
            std::cout << '\n';
            ++outer;
        }
    }

    return 0;
}