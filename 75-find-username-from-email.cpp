#include <iostream>
#include <string>

int main()
{

    std::string str="rohitsaini@gmail.com";
    int index=str.find('@');
    
    std::cout<<str.substr(0,index);
    return 0;
}