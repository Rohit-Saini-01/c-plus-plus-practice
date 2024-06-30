#include <iostream>

class Test
{
    int a;

public:
    static int count;

    Test()
    {
        a = 10;
        count++;
    }

    static int test_func()
    {
        
        return count;
    }
};

int Test::count=0;

int main()
{
    Test t1, t2;

    std::cout<<Test::count<<"\n";
    std::cout<<Test::test_func()<<"\n";

    std::cout<<t1.count<<"\n";
    std::cout<<t2.count<<"\n";

    return 0;
}