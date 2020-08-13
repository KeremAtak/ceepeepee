#include <iostream>

enum class Animal
{
    cat,
    chicken,
    dog,
    goat,
    ostritch,
    pig
};

std::string getAnimalName(Animal animal)
{
    switch(animal) 
    {
        case Animal::cat:
            return "cat";
        case Animal::chicken:
            return "chicken";
        case Animal::dog:
            return "dog";
        case Animal::goat:
            return "goat";
        case Animal::ostritch:
            return "ostritch";
        case Animal::pig:
            return "pig";
        default:
            std::cout << "getAnimalName(): Unhandled case\n";
            return 0;
    }
}

int getAnimalLegCount(Animal animal)
{
    switch(animal)
    {
        case Animal::cat: 
        case Animal::dog:
        case Animal::goat:
        case Animal::pig:
            return 4;
        case Animal::chicken: 
        case Animal::ostritch:
            return 2;
        default:
            std::cout << "getAnimalLegCount(): Unhandled case\n";
            return 0;
    }
}

void printNumberOflegs(Animal animal)
{
    std::string animalName = getAnimalName(animal);
    std::cout << "A " << animalName << " has " << getAnimalLegCount(animal) << " legs.\n";
}

int main()
{
    printNumberOflegs(Animal::cat);
    printNumberOflegs(Animal::chicken);
    return 0;
}
