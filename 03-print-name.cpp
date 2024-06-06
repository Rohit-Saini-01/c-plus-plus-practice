#include <iostream>
using namespace std;

int PrintName(string str)
{
    cout << "Hello " << str;
    return 0;
}

int main()
{
    string str;
    cout << "May I know your name \n";
    getline(cin, str);
    PrintName(str);
    return 0;
}