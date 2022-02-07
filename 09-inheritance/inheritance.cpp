#include <iostream>
#include <string>

class Person
{
public:
    int age;
    int height;
    Person(int age, int height)
    {
        std::cout << "Running person constructor" << std::endl;
        this->age = age;
        this->height = height;
    }

    ~Person()
    {
        std::cout << "Running destructor for person with age " << this->age << std::endl;
    }
};

class Firefighter : public Person
{
public:
    std::string station;
    Firefighter(int age, int height, std::string station) : Person(age, height)
    {
        std::cout << "Running firefighter constructor" << std::endl;
        this->station = station;
    }

    ~Firefighter()
    {
        std::cout << "Running destructor for firefighter with age " << this->age << std::endl;
    }
};

int main()
{
    // Downcast
    Person person = Firefighter(18, 180, "Green Station");
    std::cout << "firefighter age: " << person.age << std::endl;

    // Access subclass properties
    Firefighter firefighter = Firefighter(19, 180, "Green Station");
    std::cout << "firefighter age: " << firefighter.age << std::endl;
}
