#include <iostream>
#include <cstring>

int main()
{
    std::string str = "Hello";
    str.append(" World");

    std::cout<<str<<"\n";

    std::string str_1="How you?";
    str_1.insert(3," area",4);
    std::cout<<str_1;

    return 0;
}