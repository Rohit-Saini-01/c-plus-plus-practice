#include <iostream>
#include <string.h>

int main()
{
    char str1[100]="Hello";
    char str2[100]="What's up!?";

    if(strstr(str1,str2)!=NULL)
    std::cout<<strstr(str1,str2)<<std::endl;
    else 
    std::cout<<"Not found \n";

    char str3[20]="Hello";
    char str4[20]="hello";

    std::cout<<strcmp(str3,str4)<<"\n";
    std::cout<<strchr(str3,'l')<<"\n";
    std::cout<<strrchr(str3,'l');

    return 0;
}