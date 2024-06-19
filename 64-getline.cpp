#include <iostream>

int main()
{
    std::string str;
    
    std::cout << "Enter a string\n";
    std::getline(std::cin,str);
    std::cout<<str<<"\n";

    return 0;
}