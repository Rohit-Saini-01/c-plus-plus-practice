#include <iostream>
#include <math.h>

int main()
{
    float a, b, c, discriminant, root1, root2;

    std::cout << "Enter the value of coefficient a,b,c\n";
    std::cin >> a >> b >> c;

    discriminant = b * b - 4 * a * c;

    if (discriminant == 0)
    {
        root1 = root2 = -b / (2 * a);
        std::cout << "Real and equal roots " << root1;
    }
    else if (discriminant > 0)
    {
        root1 = (-b + std::sqrt(discriminant)) / (2 * a);
        root2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "Real and unequal roots \n"
                  << root1 << " and " << root2;
    }
    else
        std::cout << "Imaginary roots\n";

    return 0;
}
