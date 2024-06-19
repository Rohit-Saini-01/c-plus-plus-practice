#include <iostream>
#include <cstring>

int main()
{
    char str[] = "x=23;y=12;z=43";
    char *token = strtok(str, "=;");

    while(token!=NULL)
    {
        std::cout<<token<<std::endl;
        token = strtok(NULL,"=;");

    }
    
    return 0;
}