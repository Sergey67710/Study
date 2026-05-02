#include <iostream>
#include <string>
#include <Windows.h>


class Counter {
private:
    int value;

public:

    Counter() : value(1) {}

    Counter(int initialValue) : value(initialValue) {}

    void increment() {
        value++;
    }

    void decrement() {
        value--;
    }

    int getValue() const {
        return value;
    }
};

int main() {

    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    std::string userChoice;
    int initialValue;
    char command;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> userChoice;

    Counter counter;

    if (userChoice == "да" || userChoice == "Да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initialValue;
        counter = Counter(initialValue);
    }

    std::cout << "Введите команду ('+', '-', '=' или 'x'): ";

    while (true) {
        std::cin >> command;

        switch (command) {
        case '+':
            counter.increment();
            break;
        case '-':
            counter.decrement();
            break;
        case '=':
            std::cout << counter.getValue() << "\n";
            break;
        case 'x':
            std::cout << "До свидания!\n";
            return 0;
        default:
            std::cout << "Неизвестная команда. Введите '+', '-', '=' или 'x'.\n";
            break;
        }

        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
    }

    return EXIT_SUCCESS;
}