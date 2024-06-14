#include <iostream>

int main()
{
    int arr[7] = {4, 8, 6, 9, 5, 2, 100};
    int max = arr[0];

    for (int element : arr)
        if (max < element)
            max = element;

    std::cout << max;

    return 0;
}
