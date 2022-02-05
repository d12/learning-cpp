#include <iostream>

int main()
{
    std::cout << "How old are you?" << std::endl;

    int age;
    std::cin >> age;

    if (age >= 16)
    {
        std::cout << "You're old enough to get a drivers license!" << std::endl;
    }
    else
    {
        std::cout << "You're not old enough to get a drivers license - " << 16 - age << " years left!" << std::endl;
    }
}
