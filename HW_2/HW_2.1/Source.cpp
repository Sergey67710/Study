#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	int num{};
	std::cout << "Введите число: " << std::endl;
	std::cin >> num;
	std::cout << "Вы ввели: \n" << num << std::endl;

	return EXIT_SUCCESS;
}