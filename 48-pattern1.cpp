#include <iostream>

int main()
{
    int counter = 1;
    for(int i=0;i<4;i++)
    {
        for(int j=0; j<4; j++)
        {
            std::cout<<counter<<" ";
            counter++;
        }

        std::cout<<"\n";
    }
    return 0;
}
