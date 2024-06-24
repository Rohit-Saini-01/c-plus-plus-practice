#include <iostream>

int linear_search(int arr[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            std::cout << "Found " << arr[i] << " at " << i << "\n";
            return 0;
        }
    }
    std::cout << "Not found\n";
    return 0;
}

int main()
{
    int size;
    std::cout << "enter the size of the array\n";
    std::cin >> size;

    int a[size];

    std::cout << "Enter the elements of the array of size " << size << "\n";

    for (int i = 0; i < size; i++)
    {
        std::cin >> a[i];
    }

    int key;
    std::cout << "Enter the key you want to search \n";
    std::cin >> key;

    linear_search(a, key, size);

    return 0;
}