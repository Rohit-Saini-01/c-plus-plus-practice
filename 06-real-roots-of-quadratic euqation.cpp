#include <iostream>
#include <math.h>

int main()
{
    float a, b, c;
    float root1, root2;
    std::cout << "Enter the coefficients of the quadratic equation\n";
    std::cin >> a >> b >> c;
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    std::cout << "Real roots of the given quadratic equation are " << root1 << " " << root2;
    return 0;
}