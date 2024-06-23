#include <iostream>
#include <string>

int main()
{
    std::string str = "Madam";
    int len = str.length();
    std::string str_1;

    str_1.resize(str.size());

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }

    for (int i = 0; str[i] != '\0'; i++)
    {
        str_1[len - 1 - i] = str[i];
    }

    str_1[len] = '\0';
    std::cout<<str_1<<"\n";

    if (str_1 == str)
        std::cout << "Palindrome";
    else
        std::cout << "Not a Palindrome";

    return 0;
}