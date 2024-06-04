#include <iostream>
enum day
{
    mon,
    tue,
    wed = 10,
    thu,
    fri
};
typedef int marks;

int main()
{
    day d;
    marks m1, m2;
    m1 = 90;
    m2 = 80;
    d = tue;
    std::cout << d << "\n";
    std::cout << m1 << "\n";
    std::cout << m2 << "\n";
    return 0;
}
