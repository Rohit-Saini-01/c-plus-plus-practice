#include <iostream>

int main()
{
    int var = 10;
    int &alias = var;

    alias++;
    var++;

    std::cout << alias << std::endl;
    std::cout << var;
    
    return 0;
}