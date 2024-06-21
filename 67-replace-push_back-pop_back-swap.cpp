#include <iostream>

int main()
{
    std::string str = "Programming";
    std::string str_1 = "Fun";

    str.replace(3, 4, "INGGGGGGGG");
    str.swap(str_1);
    str.push_back('H');
    std::cout << str;
    str.pop_back();
    std::cout << str_1;
    std::cout << "\n"
              << str;
    return 0;
}