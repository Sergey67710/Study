#include <iostream>
#include <Windows.h>
#include <string>

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	std::string �����{};
	std::cout << "������� �����: " << std::endl;
	std::getline(std::cin >> std::ws, �����);
	std::cout << "�� �����: \n" << �����;

	return EXIT_SUCCESS;

}