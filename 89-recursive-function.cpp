#include <iostream>

int func(int var)
{
    if(var>0){
        func(var-1);
        std::cout<<var<<"\n";
    }
    return 0;
}

int func_2(int var)
{
    if(var>0)
    {
        std::cout<<var<<"\n";
        func_2(var-1);
    }
    return 0;
}

int main()
{
    func(5);
    func_2(5);

    return 0;
}