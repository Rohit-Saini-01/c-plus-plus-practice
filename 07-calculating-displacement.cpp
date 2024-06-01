#include <iostream>
#include <math.h>

int main()
{
    float initial_velocity, final_velocity, displacement, acceleration;
    std::cout << "Enter the value of initial_velocity, final_velocity and acceleration\n";
    std::cin >> initial_velocity >> final_velocity >> acceleration;
    displacement = (pow(final_velocity, 2) - pow(initial_velocity, 2)) / (2 * acceleration);
    std::cout << "Displacement = " << displacement;
    return 0;
}