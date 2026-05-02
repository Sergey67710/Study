#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <Windows.h>


class Address {
private:
    std::string city;
    std::string street;
    int houseNumber;
    int apartmentNumber;

public:
    Address(const std::string& city, const std::string& street,
        int houseNumber, int apartmentNumber)
        : city(city), street(street), houseNumber(houseNumber),
        apartmentNumber(apartmentNumber) {
    }

    std::string get_output_address() const {
        return city + ", " + street + ", " +
            std::to_string(houseNumber) + ", " +
            std::to_string(apartmentNumber);
    }

    friend bool operator<(const Address& a1, const Address& a2) {
        return a1.city < a2.city;
    }
};

void sort(std::vector<Address>& addresses) {
    for (size_t i = 0; i < addresses.size() - 1; ++i) {
        for (size_t j = 0; j < addresses.size() - i - 1; ++j) {
            if (addresses[j + 1] < addresses[j]) {
                std::swap(addresses[j], addresses[j + 1]);
            }
        }
    }
}

int main() {

    setlocale(LC_ALL, "rus");

    std::ifstream inputFile("in.txt");
    if (!inputFile.is_open()) {
        std::cerr << "Ошибка: не удалось открыть файл in.txt\n";
        return 1;
    }

    int N;
    inputFile >> N;
    inputFile.ignore();

    std::vector<Address> addresses;
    addresses.reserve(N);

    for (int i = 0; i < N; ++i) {
        std::string city, street;
        int house, apartment;

        std::getline(inputFile, city);
        std::getline(inputFile, street);
        inputFile >> house;
        inputFile >> apartment;
        inputFile.ignore();

        addresses.emplace_back(city, street, house, apartment);
    }

    inputFile.close();

    sort(addresses);

    std::ofstream outputFile("out.txt");
    if (!outputFile.is_open()) {
        std::cerr << "Ошибка: не удалось создать файл out.txt\n";
        return 1;
    }
    outputFile << N << "\n";
    for (const auto& addr : addresses) {
        outputFile << addr.get_output_address() << "\n";
    }
    outputFile.close();
    return EXIT_SUCCESS;
}