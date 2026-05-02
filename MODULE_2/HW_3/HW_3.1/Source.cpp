#include <iostream>
#include <fstream>
#include <string>
#include <Windows.h>

class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    Address(const std::string& city, const std::string& street,
        int house, int apartment)
        : city(city), street(street), houseNumber(house), apartmentNumber(apartment) {
    }

    std::string get_output_address() const {
        return city + ", " + street + ", " +
            std::to_string(houseNumber) + ", " +
            std::to_string(apartmentNumber);
    }
};

int main() {

    setlocale(LC_ALL, "Russian");

    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл in.txt\n";
        return 1;
    }

    int N;
    inputFile >> N;
    inputFile.ignore();

    Address** addresses = new Address * [N];

    for (int i = 0; i < N; ++i) {
        std::string city, street;
        int house, apartment;

        std::getline(inputFile, city);
        std::getline(inputFile, street);
        inputFile >> house;
        inputFile >> apartment;
        inputFile.ignore();
        addresses[i] = new Address(city, street, house, apartment);
    }

    inputFile.close();

    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Ошибка: не удалось создать файл out.txt\n";
        for (int i = 0; i < N; ++i) {
            delete addresses[i];
        }
        delete[] addresses;
        return 1;
    }

    outputFile << N << "\n";

    for (int i = N - 1; i >= 0; --i) {
        outputFile << addresses[i]->get_output_address() << "\n";
    }

    outputFile.close();

    for (int i = 0; i < N; ++i) {
        delete addresses[i];
    }
    delete[] addresses;

    std::cout << "Адреса успешно обработаны и записаны в out.txt\n";
    return EXIT_SUCCESS;
}