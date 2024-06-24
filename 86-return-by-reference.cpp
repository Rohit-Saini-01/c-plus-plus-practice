#include <iostream>

int &func(int &x)
{
    return x;
}

int main()
{
    int a= 10;

    std::cout<<func(a)<<std::endl;

    func(a)=25;

    std::cout<<a;

    return 0;
}