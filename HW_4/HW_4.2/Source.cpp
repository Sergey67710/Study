#include <iostream>
#include <Windows.h>



int main() {
    setlocale(LC_ALL, "rus");

    int number;
    int sum{0};

    std::cout << "Введите целое число:" << std::endl;
    std::cin >> number;

    if (number < 0) {
        number = -number;
    }
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    std::cout << "Сумма цифр: " << sum << std::endl;



    return EXIT_SUCCESS;
}