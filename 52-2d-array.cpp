#include <iostream>

int main()
{
    int row, col;

    std::cout << "Enter the value of rows and cols \n";
    std::cin >> row >> col;

    int arr[row][col];

    std::cout << "Enter the values of the 2d array\n";

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            std::cout << arr[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
