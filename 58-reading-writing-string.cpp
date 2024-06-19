#include <iostream>

int main()
{
    char str[100];
    char str1[100];

    std::cout << "Enter the first string\n";
    std::cin.get(str, 100);
    std::cout << str << "\n";

    std::cout << "Enter the second string";
    std::cin.get(str1, 100);
    std::cout << str1;
    std::cout << "Next Line\n";

    return 0;
}