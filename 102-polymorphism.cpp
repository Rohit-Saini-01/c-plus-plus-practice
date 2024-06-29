#include <iostream>

class Car
{
public:
    virtual int start() = 0;
    virtual int stop() = 0;
};

class Toyota:public Car
{
    int start()
    {
        std::cout<<"Toyota starts\n";
        return 0;
    }
    int stop()
    {
        std::cout<<"Toyota stops\n";
        return 0;
    }
};

class BMW:public Car
{
    int start()
    {
        std::cout<<"BMW starts\n";
        return 0;
    }
    int stop()
    {
        std::cout<<"BMW stops\n";
        return 0;
    }
};

int main()
{
    Car *c=new Toyota;
    c->start();
    
    c=new BMW;
    c->start();

    return 0;
}