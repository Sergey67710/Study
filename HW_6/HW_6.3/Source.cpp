#include <iostream>
#include <Windows.h>

unsigned long long fibonacci(int n) 
{
    if (n == 0) return 0;
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int count;
    std::cout << "Введите число: ";
    std::cin >> count;

    std::cout << "Числа Фибоначчи: ";
    for (int i = 0; i < count; ++i) 
    {
        std::cout << fibonacci(i) << " ";
    }
    std::cout << std::endl;

    return EXIT_SUCCESS;
}