#include <iostream>
#include <string>
 
int main()
{
    /**std::cout << "Enter your full name: ";
    std::string name{};
    std::cin >> name; // this won't work as expected since std::cin breaks on whitespace
 
    std::cout << "Enter your age: ";
    std::string age{};
    std::cin >> age;
 
    std::cout << "Your name is " << name << " and your age is " << age << '\n';
    
    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name); // read a full line of text into name
 
    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin, age); // read a full line of text into age
 
    std::cout << "Your name is " << name << " and your age is " << age << '\n';

    std::cout << "Pick 1 or 2: ";
    int choice{};
    std::cin >> choice;
    
    std::cin.ignore(32767, '\n'); // ignore up to 32767 characters until a \n is removed

    std::cout << "Now enter your name: ";
    std::string name2{};
    std::getline(std::cin, name2);
 
    std::cout << "Hello, " << name2 << ", you picked " << choice << '\n';

    std::string a{ "45" };
    std::string b{ "11" };
 
    std::cout << a + b << '\n'; // a and b will be concatenated
    a += " volts";
    std::cout << a << '\n';
 
    std::string myName{ "Alex" };
    std::cout << myName << " has " << myName.length() << " characters\n"; **/

    std::cout << "Enter your full name: ";
    std::string name{};
    std::getline(std::cin, name); // read a full line of text into name

    std::cout << "Enter your age: ";
    std::string age{};
    std::getline(std::cin, age); // read a full line of text into age

    int ageNumber { stoi(age) };
    double nameLength { static_cast<double>(name.length()) };
    double livedPerCharacter { nameLength / ageNumber };
    std::cout << "You've lived " << livedPerCharacter << " years for each letter in your name.\n";

    return 0;
}
