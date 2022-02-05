#include <iostream>

int main()
{
    std::cout << "How old are you?" << std::endl;
    int age;

    std::cin >> age;
    std::cout << "You are " << age << " years old" << std::endl;
    std::cout << "That is " << age * 365 << " days." << std::endl;
}
