#include <iostream>

int func()
{
    static int var =10;
    var++;
    std::cout<<var<<"\n";
    return 0;
}

int main()
{
    func();
    func();
    func();
    return 0;
}