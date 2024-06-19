#include <iostream>
#include <string.h>

int main()
{
    std::string str;

    std::cout << "Enter a string\n";
    std::cin >> str;
    std::cout << str<<"\n";

    std::cout << "Enter another string\n";
    std::cin >> str;
    std::cout << str;

    return 0;
}