#include <iostream>

int main()
{
    float principal, rate, time, simple_interest;

    std::cout << "ENter the value of p,r and t\n";
    std::cin >> principal >> rate >> time;

    simple_interest = (principal * rate * time) / 100;
    std::cout << "Simple interest is " << simple_interest;

    return 0;
}
