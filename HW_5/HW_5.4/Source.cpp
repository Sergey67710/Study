#include <iostream>
#include <Windows.h>

int main() 
{
    setlocale(LC_ALL, "rus");

    int arr[10] = { 27, 13, 45, 8, 31, 50, 2, 19, 36, 7 };
    int n = 10;
    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < n; ++i) 
    {
        std::cout << arr[i];
        if (i < n - 1) 
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    for (int i = 0; i < n - 1; ++i) 
    {
        bool swapped = false;
        for (int j = n - 1; j > i; --j)
        {
            if (arr[j] < arr[j - 1]) 
            {
                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) 
        {
            break;
        }
    }
    std::cout << "Массив после сортировки: ";
    for (int i = 0; i < n; ++i) 
    {
        std::cout << arr[i];
        if (i < n - 1) 
        {
            std::cout << " ";
        }
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}