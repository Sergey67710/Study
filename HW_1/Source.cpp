#include <clocale>
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	std::cout << "Сергей\n";
	std::cout << 23 << "\n";
}