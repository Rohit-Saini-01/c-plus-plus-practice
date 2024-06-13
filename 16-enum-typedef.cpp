#include <iostream>
enum day
{
    mon,
    tue,
    wed,
    fri = 10,
    sat,
    sun
};
typedef int marks;
typedef int rollno;

int main()
{
    day d;
    marks m1 = 10, m2 = 20, m3 = 30;
    rollno r1 = 3, r2 = 5, r3 = 8;
    d = fri;
    std::cout << d << std::endl
              << m1 << std::endl
              << m2 << "\n"
              << r1;
    return 0;
}
