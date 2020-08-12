#include <iostream>

struct Employee
{
    short id;
    int age;
    double wage;
};

struct Rectangle //Starting with C++11, it’s possible to give non-static (normal) struct members a default value
{
    double length{ 1.0 };
    double width{ 1.0 };
};

struct Point3d
{
    double x;
    double y;
    double z;
};

struct Company
{
    Employee CEO; // Employee is a struct within the Company struct
    int numberOfEmployees;
};

Point3d getZeroPoint()
{
    // We can create a variable and return the variable.
    Point3d temp { 0.0, 0.0, 0.0 };
    return temp;
}
 
Point3d getZeroPoint2()
{
    // We can return directly. We already specified the type
    // at the function declaration (Point3d), so we don't need
    // it again here.
    return { 0.0, 0.0, 0.0 };
}
 
Point3d getZeroPoint3()
{
    // We can use empty curly braces to zero-initialize all
    // members of `Point3d`.
    return {};
}

void printInformation(Employee employee)
{
    std::cout << "ID:   " << employee.id << '\n';
    std::cout << "Age:  " << employee.age << '\n';
    std::cout << "Wage: " << employee.wage << '\n';
}
 

int main()
{
    /**Employee joe; // create an Employee struct for Joe
    joe.id = 14; // assign a value to member id within struct joe
    joe.age = 32; // assign a value to member age within struct joe
    joe.wage = 24.15; // assign a value to member wage within struct joe
    
    Employee frank; // create an Employee struct for Frank
    frank.id = 15; // assign a value to member id within struct frank
    frank.age = 28; // assign a value to member age within struct frank
    frank.wage = 18.27; // assign a value to member wage within struct frank**/

    Employee joe{ 1, 32, 60000.0 }; // joe.id = 1, joe.age = 32, joe.wage = 60000.0
    Employee frank{ 2, 28 }; // frank.id = 2, frank.age = 28, frank.wage = 0.0 (default initialization)

    int totalAge{ joe.age + frank.age };
    
    std::cout << "Total age: " << totalAge << '\n';

    if (joe.wage > frank.wage)
        std::cout << "Joe makes more than Frank\n";
    else if (joe.wage < frank.wage)
        std::cout << "Joe makes less than Frank\n";
    else
        std::cout << "Joe and Frank make the same amount\n";
    
    // Frank got a promotion
    frank.wage += 2.50;
    
    // Today is Joe's birthday
    ++joe.age; // use pre-increment to increment Joe's age by 1

    printInformation(joe);
    printInformation(frank);

    Employee jack;
    jack = { 1, 32, 60000.0 }; // C++11 only
    printInformation(jack);

    Rectangle x; // length = 1.0, width = 1.0
    Rectangle y{ 2.0, 2.0 };

    x.length = 2.0; // you can assign other values like normal

    std::cout << "Length: " << x.length << ", Width: " << x.width << '\n';
    std::cout << "Length: " << y.length << ", Width: " << y.width << '\n';
    
    Point3d zero{ getZeroPoint() };
 
    if (zero.x == 0.0 && zero.y == 0.0 && zero.z == 0.0)
        std::cout << "The point is zero\n";
    else
        std::cout << "The point is not zero\n";
    
    Company myCompany{{ 1, 42, 60000.0 }, 5 };

    std::cout << myCompany.CEO.wage << '\n';

    return 0;
}
