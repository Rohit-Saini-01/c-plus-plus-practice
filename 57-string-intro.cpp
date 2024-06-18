#include <iostream>

int main()
{
    char s[10] = "Hello";
    std::cout << s << std::endl;

    char st[] = "HELLO";
    std::cout << st << std::endl;

    char str[] = {'H', 'E', 'L', 'L', 'O', '\0'};
    std::cout << str << std::endl;

    char stri[] = {65,66,67,68,69,0,97};
    std::cout<<stri<<std::endl;

    char *stt="Hello";
    std::cout<<stt;

    return 0;
}