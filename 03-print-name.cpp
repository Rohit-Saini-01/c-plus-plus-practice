#include <iostream>

int main()
{
    std::string name;
    std::cout << "May I know your name? \n";
    std::getline(std::cin, name);
    std::cout << "Hello " << name;
    return 0;
}