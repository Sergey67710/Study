#include <clocale>
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "������\n";
	std::cout << 23 << "\n";
}