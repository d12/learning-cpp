#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your grade (0-100)" << std::endl;

    int grade;
    std::cin >> grade;

    char letter_grade;

    switch (grade / 10)
    {
    case 5:
        letter_grade = 'D';
        break;

    case 6:
        letter_grade = 'C';
        break;

    case 7:
        letter_grade = 'B';
        break;

    case 8:
        letter_grade = 'A';
        break;

    case 9:
        letter_grade = 'A';
        break;

    case 10:
        letter_grade = 'A';
        break;

    default:
        letter_grade = 'F';
    }

    std::cout << "You got a " << letter_grade << std::endl;
}
