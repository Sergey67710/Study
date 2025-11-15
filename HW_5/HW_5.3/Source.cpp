#include <iostream>
#include <Windows.h>

int main() 
{
    setlocale(LC_ALL, "rus");

    int arr[3][6] = 
    {
        {12,  5, 47,  3, 22, 18},
        {31, 44,  9, 50, 14,  7},
        {25, 38, 11, 40,  2, 33}
    };

    std::cout << "Массив:" << std::endl;
    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 6; ++j) 
        {
            std::cout << arr[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    int minVal = arr[0][0];
    int maxVal = arr[0][0];
    int minRow = 0, minCol = 0;
    int maxRow = 0, maxCol = 0;

    for (int i = 0; i < 3; ++i) 
    {
        for (int j = 0; j < 6; ++j) 
        {
            if (arr[i][j] < minVal) 
            {
                minVal = arr[i][j];
                minRow = i;
                minCol = j;
            }
            if (arr[i][j] > maxVal) 
            {
                maxVal = arr[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }
    std::cout << "\nИндекс минимального элемента:  " << minRow << ' ' << minCol << ' ' << std::endl;

    std::cout << "Индекс максимального элемента: " << maxRow << ' ' << maxCol << ' ' << std::endl;

    return EXIT_SUCCESS;
}