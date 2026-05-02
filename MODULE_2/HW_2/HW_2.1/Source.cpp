#include <iostream>
#include <Windows.h>

class Calculator {
private:
    double num1;
    double num2;

public:
    bool set_num1(double num) {
        if (num != 0) {
            this->num1 = num;
            return true;
        }
        return false;
    }

    bool set_num2(double num) {
        if (num != 0) {
            this->num2 = num;
            return true;
        }
        return false;
    }

    double add() {
        return num1 + num2;
    }

    double multiply() {
        return num1 * num2;
    }

    double subtract_1_2() {
        return num1 - num2;
    }

    double subtract_2_1() {
        return num2 - num1;
    }

    double divide_1_2() {
        return num1 / num2;
    }

    double divide_2_1() {
        return num2 / num1;
    }
};

int main() {

    setlocale(LC_ALL, "rus");

    Calculator calc;
    double input1, input2;

    while (true) {
        std::cout << "Введите num1: ";
        std::cin >> input1;

        bool num1_set = calc.set_num1(input1);
        if (!num1_set) {
            std::cout << "Неверный ввод!\n";
            continue;
        }

        std::cout << "Введите num2: ";
        std::cin >> input2;

        bool num2_set = calc.set_num2(input2);
        if (!num2_set) {
            std::cout << "Неверный ввод!\n";
            continue;
        }

        std::cout << "num1 + num2 = " << calc.add() << "\n";
        std::cout << "num1 - num2 = " << calc.subtract_1_2() << "\n";
        std::cout << "num2 - num1 = " << calc.subtract_2_1() << "\n";
        std::cout << "num1 * num2 = " << calc.multiply() << "\n";
        std::cout << "num1 / num2 = " << calc.divide_1_2() << "\n";
        std::cout << "num2 / num1 = " << calc.divide_2_1() << "\n\n";
    }

    return EXIT_SUCCESS;
}