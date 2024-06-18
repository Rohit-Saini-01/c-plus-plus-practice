#include <iostream>

int main()
{
    char str[100];

    std::cout << "Enter your name:\n";
    std::cin >> str;
    std::cout << str << std::endl;

    char get[100];
    std::cout << "Enter your name:\n";
    std::cin.get(get, 100);
    std::cout << get << std::endl;

    char getline[100];
    std::cout << "Enter a line:\n";
    std::cin.getline(getline, 100);
    std::cout << getline << std::endl;

    return 0;
}