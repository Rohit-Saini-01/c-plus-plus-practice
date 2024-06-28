#include <iostream>

class Parent
{
public:
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
    Child ch;
    Parent pr;

    ch.display();
    pr.display();

    return 0;
}