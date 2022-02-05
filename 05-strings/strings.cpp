#include <iostream>
#include <string>

int main()
{
    std::string string = "I am a string!";
    const char *char_string = "I am a char*";

    // Both can be printed
    std::cout << string << std::endl;
    std::cout << char_string << std::endl;

    // Strings are generally better, less error prone due to less memory management.
    // Also often just as efficient, sometimes more efficient.
    // Strings also have a number of helpful functions builtin.

    std::string a = "foo";
    std::string b = "bar";

    // Append
    std::cout << "Appending " << a << " and " << b << " returns " << a + b << std::endl;

    // Get length
    std::cout << a << " is " << a.length() << " chars long." << std::endl;

    // Get char at position
    char x = a.at(0);
    std::cout << "The char at pos 0 of string " << a << " is " << x << std::endl;

    // Equality
    std::cout << "Are " << a << " and " << b << " equal? " << (a == b ? "true" : "false") << std::endl;

    std::string c = "foo";
    std::cout << "Are " << a << " and " << c << " equal? " << (a == c ? "true" : "false") << std::endl;
    std::cout << "Are " << a << " and " << c << " equal? " << (a.compare(c) == 0 ? "true" : "false") << std::endl;

    // Substring
    std::string substring = a.substr(0, 2);
    std::cout << "The substring of " << a << " going from index 0 (inclusive) to 2 (exclusive) is " << substring << std::endl;
}
