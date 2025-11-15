#include <iostream>

int main() 
{
    int arr[10] = { 90, 1, 51, 6, 4, 55, 25, 30, 9, 18 };

    for (int i = 0; i < 10; ++i) 
    {
        std::cout << arr[i];
        if (i < 9) 
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}
