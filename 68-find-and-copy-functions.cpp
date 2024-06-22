#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "Hello World!";
    char str_copy[100];

    str_copy[str.length()]='\0';

    str.copy(str_copy,str.length());
    cout<<str_copy<<endl;

    cout<<str.find('k')<<endl;
    cout<<str.find('l',3)<<endl;
    cout<<str.rfind('l',9)<<endl;
    cout<<str.find_last_of('l',8)<<endl;

    return 0;
}