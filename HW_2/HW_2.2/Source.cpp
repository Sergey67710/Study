#include <iostream>
#include <Windows.h>
#include <string>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string Слово{};
	std::cout << "Введите слово: " << std::endl;
	std::getline(std::cin >> std::ws, Слово);
	std::cout << "Вы ввели: \n" << Слово;

	return EXIT_SUCCESS;

}