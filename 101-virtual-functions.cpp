#include <iostream>

class Parent
{
public:
    // virtual function
    virtual int display()
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

    Parent *pr = new Child; // base class pointer derived class object

    pr->display(); // child class function will be called

    return 0;
}