#include <iostream>
#include <cstring>

int main()
{
    char str[] = "235";
    char str1[] = "123.23";

    long int str2 = strtol(str, NULL, 10);
    std::cout << str2 << "\n";

    float str3 = strtof(str1, NULL);
    std::cout << str3;

    return 0;
}