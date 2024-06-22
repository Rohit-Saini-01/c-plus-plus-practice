#include <iostream>

int main()
{
    std::string str_1 = "Hello";
    std::string str_2 = " World";

    std::cout << str_1.substr(2, 1) << std::endl;
    std::cout << str_1.compare(str_2) << std::endl;
    std::cout << str_1.at(1) << std::endl;
    std::cout << str_1[1] << std::endl;
    std::cout << str_1+str_2 << std::endl;
    std::cout << str_1.front() << std::endl;
    std::cout << str_2.back() << std::endl;

    str_1 =str_2;
    std::cout<<str_1<<std::endl<<str_2;

    return 0;
}