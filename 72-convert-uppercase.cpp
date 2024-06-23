#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "HeLLo 1WorLd";
    string::iterator it;

    for (it = str.begin(); it != str.end(); it++)
    {
        if (*it >=97 && *it<=122)
        *it=*it-32;
    }

    cout<<str;

    return 0;
}