#include <iostream>

class Parent
{
public:
// Not a virtual function
    int display()
    {
        std::cout << "Display of parent\n";
        return 0;
    }
};

class Child : public Parent
{
public:
    int display()
    {
        std::cout << "Display of child\n";
        return 0;
    }
};

int main()
{

    Parent* pr=new Child;

    pr->display();// parent class function will be called

    return 0;
}