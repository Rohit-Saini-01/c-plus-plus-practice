#include <iostream>
#include <math.h>

int main()
{
    float a, b, c, root1, root2;
    std::cout << "Enter the value of coefficients a,b and c \n";
    std::cin >> a >> b >> c;
    root1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
    root2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);
    std::cout << "Roots are " << root1 << " and " << root2;
    return 0;
}
