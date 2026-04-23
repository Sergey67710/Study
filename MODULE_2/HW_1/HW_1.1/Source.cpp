#include <iostream>
#include <string>
#include <Windows.h>

enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

int main() {

    setlocale(LC_ALL, "rus");

    int monthNumber;

    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> monthNumber;

        if (monthNumber == 0) {
            std::cout << "До свидания" << std::endl;
            break;
        }

        Month currentMonth = static_cast<Month>(monthNumber);

        switch (currentMonth) {
        case JANUARY:
            std::cout << "Январь" << std::endl;
            break;
        case FEBRUARY:
            std::cout << "Февраль" << std::endl;
            break;
        case MARCH:
            std::cout << "Март" << std::endl;
            break;
        case APRIL:
            std::cout << "Апрель" << std::endl;
            break;
        case MAY:
            std::cout << "Май" << std::endl;
            break;
        case JUNE:
            std::cout << "Июнь" << std::endl;
            break;
        case JULY:
            std::cout << "Июль" << std::endl;
            break;
        case AUGUST:
            std::cout << "Август" << std::endl;
            break;
        case SEPTEMBER:
            std::cout << "Сентябрь" << std::endl;
            break;
        case OCTOBER:
            std::cout << "Октябрь" << std::endl;
            break;
        case NOVEMBER:
            std::cout << "Ноябрь" << std::endl;
            break;
        case DECEMBER:
            std::cout << "Декабрь" << std::endl;
            break;
        default:
            std::cout << "Неправильный номер!" << std::endl;
            break;
        }
    } while (true);

    return EXIT_SUCCESS;
}
