#include <iostream>

int main()
{
    float principal, rate, time, simple_interest;
    std::cout << "Enter the value of principal, rate and time\n";
    std::cin >> principal >> rate >> time;
    simple_interest = principal * rate * time / 100;
    std::cout << "Simple Interest = " << simple_interest;
    return 0;
}