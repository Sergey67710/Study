#include <iostream>
#include <Windows.h>

int main() 
{
    setlocale(LC_ALL, "rus");

    int arr[10] = { 50, 4, 88, 20, 11, 2, 66, 17, 6, 57 };
    std::cout << "Массив: ";
    for (int i = 0; i < 10; ++i) 
    {
        std::cout << arr[i];
        if (i < 9) 
        {
            std::cout << ' ';
        }
    }
    std::cout << std::endl;
    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < 10; ++i) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    std::cout << "Минимальный элемент:  " << min << std::endl;
    std::cout << "Максимальный элемент: " << max << std::endl;

    return EXIT_SUCCESS;
}