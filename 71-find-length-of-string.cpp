#include <iostream>

int main()
{
    std::string str="hello";
    std::string::iterator it;

    int count=0;

    for(it=str.begin();it!=str.end();it++)
    {
        count++;
    }

    std::cout<<count<<"\n";

    count=0;

    for(int i=0; str[i]!='\0';i++)
    {
        count++;
    }

    std::cout<<count;
    return 0;
}