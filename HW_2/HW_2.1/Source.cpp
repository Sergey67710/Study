#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num{};
	std::cout << "������� �����: " << std::endl;
	std::cin >> num;
	std::cout << "�� �����: \n" << num << std::endl;

	return EXIT_SUCCESS;
}