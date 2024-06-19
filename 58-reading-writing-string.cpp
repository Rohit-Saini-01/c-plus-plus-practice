#include <iostream>

int main()
{
    char str[100];
    char str1[100];

    std::cout << "Enter the first string\n";
    std::cin.get(str, 100);
    std::cout << str << "\n";

    std::cin.ignore();

    std::cout << "Enter the second string\n";
    std::cin.get(str1, 100);
    std::cout << str1;
    
    return 0;
}