#include <iostream>
 
int main()
{
    enum Color
    {
        color_red, // color_red is placed in the same scope as Color
        color_blue
    };
 
    enum Fruit
    {
        fruit_banana, // fruit_banana is placed in the same scope as Fruit
        fruit_apple
    };
	
    Color color{ color_red }; // Color and color_red can be accessed in the same scope (no prefix needed)
    Fruit fruit{ fruit_banana }; // Fruit and fruit_banana can be accessed in the same scope (no prefix needed)
 
    if (color == fruit) // The compiler will compare a and b as integers
        std::cout << "color and fruit are equal\n"; // and find they are equal!
    else
        std::cout << "color and fruit are not equal\n";
    
    enum class Color2 // "enum class" defines this as a scoped enumeration instead of a standard enumeration
    {
        red, // red is inside the scope of Color
        blue
    };
 
    enum class Fruit2
    {
        banana, // banana is inside the scope of Fruit
        apple
    };

    Color2 color_2{ Color2::red }; // note: red is not directly accessible any more, we have to use Color2::red
    Fruit2 fruit_2{ Fruit2::banana }; // note: banana is not directly accessible any more, we have to use Fruit2::banana
	
    /**if (color == fruit) // compile error here, as the compiler doesn't know how to compare different types Color and Fruit
        std::cout << "color and fruit are equal\n";
    else
        std::cout << "color and fruit are not equal\n";**/

    if (color_2 == Color2::red) // this is okay
        std::cout << "The color is red!\n";
    else if (color_2 == Color2::blue)
        std::cout << "The color is blue!\n";

    return 0;
}
