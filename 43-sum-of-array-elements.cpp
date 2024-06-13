#include <iostream>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sum = 0;

    for (auto element : arr)
    {
        sum += element;
    }

    std::cout << sum;

    return 0;
}
