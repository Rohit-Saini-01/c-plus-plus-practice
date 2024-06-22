#include <iostream>
#include <string>

int main()
{
    std::string str = "hello";

    std::string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        // std::cout << *it;
        *it=*it-32;
    }

    std::cout<<str<<std::endl;

    for(int i=0; str[i]!='\0'; i++)
    {
        str[i]=str[i]+32;
    }

    std::cout<<str;

    return 0;
}