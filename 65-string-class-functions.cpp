#include <iostream>
#include <cstring>

int main()
{
    std::string str;
    std::cout << "Enter a string\n";
    std::getline(std::cin, str);

    std::cout << str << "\n";

    std::cout << str.length() << std::endl;
    std::cout << str.size() << std::endl;
    std::cout << str.max_size() << std::endl;
    std::cout << str.capacity() << std::endl;

    str.clear();
    std::cout << str;

    str = "I'm back";

    if (str.empty())
    {
        std::cout << "Empty String\n";
    }
    else
        std::cout << "String is " << str;
    return 0;
}