#include <iostream>

int main()
{
    std::string str;
    std::cout << "May I know your name?\n";
    getline(std::cin, str);
    std::cout << "Welcome " << str;
    return 0;
}