#include <iostream>
#include <Windows.h>

int power_calc(int base, int exp) 
{
    int result = 1;
    for (int i = 0; i < exp; i++) 
    {
        result *= base;
    }
    return result;
}

int main(int argc, char** argv) 
{
    setlocale(LC_ALL, "rus");

    int value = 5, power = 2;

    std::cout << value << " в степени " << power << " = " << power_calc(value, power) << std::endl;
    value = 3;
    power = 3;

    std::cout << value << " в степени " << power << " = " << power_calc(value, power) << std::endl;
    value = 4;
    power = 4;

    std::cout << value << " в степени " << power << " = " << power_calc(value, power) << std::endl;

    return EXIT_SUCCESS;
}