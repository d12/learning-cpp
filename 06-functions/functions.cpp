#include <iostream>
#include <string>

void printString(std::string s)
{
    std::cout << s << std::endl;
}

int addNumbers(int a, int b)
{
    return a + b;
}

void reassignVar(std::string s)
{
    s = "bar";
}

void reassignByReference(std::string &s)
{
    s = "bar";
}

std::string *badFunction()
{
    std::string foo = "foo";

    return &foo;
}

int main()
{
    printString("Hello world!");

    int sum = addNumbers(3, 7);
    std::cout << "The sum of 3 and 7 is " << sum << std::endl;

    std::string s = "foo";
    reassignVar(s);
    std::cout << "The value of s after being passed to reassignVar is " << s << std::endl;

    reassignByReference(s);
    std::cout << "The value of s after being passed to reassignByReference is " << s << std::endl;

    std::string badString = *badFunction();
    std::cout << "The value of s being returned from badFunction is " << badString << std::endl;
}
