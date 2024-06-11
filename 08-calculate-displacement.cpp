#include <iostream>

int main()
{
    float initial_velocity, final_velocity, acceleration, displacement;

    std::cout << "Enter the value of initial_velocity, final_velocity and acceleration \n";

    std::cin >> initial_velocity >> final_velocity >> acceleration;

    displacement = (final_velocity * final_velocity - initial_velocity * initial_velocity) / (2 * acceleration);

    std::cout << "Displacement is " << displacement;
    return 0;
}