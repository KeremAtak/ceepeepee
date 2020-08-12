#include <iostream>
#include <string>

// Define a new enumeration named Color
enum Color
{
    // Here are the enumerators
    // These define all the possible values this type can hold
    // Each enumerator is separated by a comma, not a semicolon
    COLOR_BLACK, // assigned 0
    COLOR_RED, // assigned 1
    COLOR_BLUE, // assigned 2
    COLOR_GREEN, // assigned 3
    COLOR_WHITE, // assigned 4
    COLOR_CYAN, // assigned 5
    COLOR_YELLOW, // assigned 6
    COLOR_MAGENTA, // assigned 7 // see note about trailing comma on the last enumerator below
}; // however the enum itself must end with a semicolon

enum Feeling
{
HAPPY,
TIRED,
// BLUE // error, BLUE was already used in enum Color in the global namespace
};

enum Animal
{
    ANIMAL_CAT = -3,
    ANIMAL_DOG, // assigned -2
    ANIMAL_PIG, // assigned -1
    ANIMAL_HORSE = 5,
    ANIMAL_GIRAFFE = 5, // shares same value as ANIMAL_HORSE
    ANIMAL_CHICKEN // assigned 6
};

// Define a few variables of enumerated type Color
Color paint = COLOR_WHITE;
Color house(COLOR_BLUE);
Color apple { COLOR_RED };

Animal pig { ANIMAL_PIG };
Animal giraffe { ANIMAL_GIRAFFE };

// Animal animal = 5; // will cause compiler error

Color color = static_cast<Color>(5); // ugly

// Use an 8 bit unsigned integer as the enum base.
enum Color2 : std::uint_least8_t
{
    COLOR_BLACK2,
    COLOR_RED2,
    // ...
};

//enum Color3; // Error
enum Color3 : int; // Okay
 
// Because Color was forward declared with a fixed base, we
// need to specify the base again at the definition.
enum Color3 : int
{
    COLOR_BLACK3,
    COLOR_RED3,
    // ...
};

void printColor(Color color)
{
    if (color == COLOR_BLACK)
        std::cout << "Black";
    else if (color == COLOR_RED)
        std::cout << "Red";
    else if (color == COLOR_BLUE)
        std::cout << "Blue";
    else if (color == COLOR_GREEN)
        std::cout << "Green";
    else if (color == COLOR_WHITE)
        std::cout << "White";
    else if (color == COLOR_CYAN)
        std::cout << "Cyan";
    else if (color == COLOR_YELLOW)
        std::cout << "Yellow";
    else if (color == COLOR_MAGENTA)
        std::cout << "Magenta";
    else
        std::cout << "Who knows!";
}

enum ParseResult
{
    // We don't need specific values for our enumerators.
    SUCCESS,
    ERROR_OPENING_FILE,
    ERROR_READING_FILE,
    ERROR_PARSING_FILE
};
 
/**ParseResult readFileContents()
{
    if (!openFile())
        return ERROR_OPENING_FILE;
    if (!readFile())
        return ERROR_READING_FILE;
    if (!parsefile())
        return ERROR_PARSING_FILE;
 
    return SUCCESS;
}**/

enum ItemType
{
    ITEMTYPE_SWORD,
    ITEMTYPE_TORCH,
    ITEMTYPE_POTION
};
 
std::string getItemName(ItemType itemType)
{
    if (itemType == ITEMTYPE_SWORD)
        return "Sword";
    if (itemType == ITEMTYPE_TORCH)
        return "Torch";
    if (itemType == ITEMTYPE_POTION)
        return "Potion";
 
    // Just in case we add a new item in the future and forget to update this function
    return "???";
}

enum SortType
{
    SORTTYPE_FORWARD,
    SORTTYPE_BACKWARDS
};
 
void sortData(SortType type)
{
    if (type == SORTTYPE_FORWARD)
        // sort data in forward order
    else if (type == SORTTYPE_BACKWARDS)
        // sort data in backwards order
}

int main()
{
    Color color;
    // std::cin >> color; // will cause compiler error
    std::cout << paint << '\n';
    std::cout << giraffe << '\n';
    std::cout << pig << '\n';
    
    /**if (readFileContents() == SUCCESS)
    {
        // do something
    }
    else
    {
        // print error message
    }**/

    // ItemType is the enumerated type we've defined above.
    // itemType (lower case i) is the name of the variable we're defining (of type ItemType).
    // ITEMTYPE_TORCH is the enumerated value we're initializing variable itemType with.
    ItemType itemType{ ITEMTYPE_TORCH };
 
    std::cout << "You are carrying a " << getItemName(itemType) << '\n';

    printColor(COLOR_BLACK);
    return 0;
}
