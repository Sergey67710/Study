#include <iostream>
#include <Windows.h>

int main() 
{
    setlocale(LC_ALL, "rus");

    int num;

    std::cout << "¬ведите целое число:" << std::endl;
    std::cin >> num;

    for (int i{1}; i <= 10; ++i) {
        std::cout << num << " x " << i << " = " << (num * i) << std::endl;
    }

    return EXIT_SUCCESS;
}