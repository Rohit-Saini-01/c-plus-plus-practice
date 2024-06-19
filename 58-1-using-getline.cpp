#include <iostream>

int main()
{
    char str[100];
    char str1[100];

    std::cout<<"Enter the first string\n";
    std::cin.getline(str,100);
    std::cout<<str<<"\n";

    std::cout << "Enter the second string\n";
    std::cin.getline(str1, 100);
    std::cout << str1 << "\n";

    return 0;
}