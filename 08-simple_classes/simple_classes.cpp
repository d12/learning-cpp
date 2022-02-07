#include <iostream>

class Person
{
public:
    int age;
    int height;
    Person(int age, int height)
    {
        std::cout << "Running constructor" << std::endl;
        this->age = age;
        this->height = height;
    }

    ~Person()
    {
        std::cout << "Running destructor for person with age " << this->age << std::endl;
    }
};

int main()
{
    Person *person = new Person(10, 180);
    std::cout << "Persons age is " << person->age << std::endl;
    std::cout << "Persons height is " << person->height << std::endl;
    delete person;

    Person otherPerson = Person(15, 190);
    std::cout << "Persons age is " << otherPerson.age << std::endl;
    std::cout << "Persons height is " << otherPerson.height << std::endl;

    std::cout << "Last line of the program" << std::endl;
}
