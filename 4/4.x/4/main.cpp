#include <iostream>
#include "constants.h"

int main()
{
    int secondsElapsed { 0 };
    double height {};

    std::cout << "Enter the height of the tower in meters: ";
    std::cin >> height;
    double distanceFallen { 0 };

    while (height > distanceFallen) 
    {
        std::cout << "At " << secondsElapsed << " seconds, the ball is at height: "
                <<  height - distanceFallen << "\n";
        secondsElapsed++;
        distanceFallen = constants::gravity * secondsElapsed * secondsElapsed / 2;
    }
    std::cout << "At " << secondsElapsed << " seconds, the ball is on the ground.\n";
}