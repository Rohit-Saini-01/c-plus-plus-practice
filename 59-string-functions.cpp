#include <iostream>
#include<cstring>

int main()
{
    char str1[100]="Good";
    char str2[100]=" Morning";
    
    
    std::cout<<strlen(str1)<<"\n";

    strcat(str1,str2);
    std::cout<<str1<<"\n";

    strncat(str1,str2,3);
    std::cout<<str1<<"\n";

    char str[100];
    strncpy(str,str1,12);
    std::cout<<str;

    return 0;
}