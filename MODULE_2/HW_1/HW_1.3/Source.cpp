#include <iostream>
#include <string>
#include <Windows.h>

struct Address {
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;
    std::string postalCode;
};

void printAddress(const Address& addr) {
    std::cout << "Город: " << addr.city << std::endl;
    std::cout << "Улица: " << addr.street << std::endl;
    std::cout << "Номер дома: " << addr.houseNumber << std::endl;
    std::cout << "Номер квартиры: " << addr.apartmentNumber << std::endl;
    std::cout << "Индекс: " << addr.postalCode << std::endl;
    std::cout << std::endl;
}

void inputAddress(Address& addr) {
    std::cout << "Введите город: ";
    std::cin.ignore();
    std::getline(std::cin, addr.city);

    std::cout << "Введите улицу: ";
    std::getline(std::cin, addr.street);

    std::cout << "Введите номер дома: ";
    std::cin >> addr.houseNumber;

    std::cout << "Введите номер квартиры: ";
    std::cin >> addr.apartmentNumber;

    std::cout << "Введите индекс: ";
    std::cin.ignore();
    std::getline(std::cin, addr.postalCode);
}

int main() {

    setlocale(LC_ALL, "rus");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Address address1;
    address1.city = "Москва";
    address1.street = "Арбат";
    address1.houseNumber = 12;
    address1.apartmentNumber = 8;
    address1.postalCode = "123456";

    std::cout << std::endl;

    Address address2;
    std::cout << "Введите данные для второго адреса:" << std::endl;
    inputAddress(address2);

    std::cout << std::endl;

    std::cout << "Результат ввода:" << std::endl << std::endl;
    printAddress(address1);
    printAddress(address2);

    return EXIT_SUCCESS;
}