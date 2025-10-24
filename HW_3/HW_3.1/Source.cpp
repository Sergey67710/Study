#include <iostream>

int main() 
{
	setlocale(LC_ALL, "rus");
	std::cout << std::boolalpha;
	
	std::cout << "Оператор: ||" << std::endl;

	std::cout << "true    true     ";
	std::cout << (true || true) << std::endl;

	std::cout << "false    true    ";
	std::cout << (false || true) << std::endl;

	std::cout << "true    false    ";
	std::cout << (true || false) << std::endl;

	std::cout << "false    false   ";
	std::cout << (false || false) << std::endl;

		std::cout << std::endl;

	std::cout << "Оператор: &&" << std::endl;

	std::cout << "true    true     ";
	std::cout << (true && true) << std::endl;

	std::cout << "false    true    ";
	std::cout << (false && true) << std::endl;

	std::cout << "true    false    ";
	std::cout << (true && false) << std::endl;

	std::cout << "false    false   ";
	std::cout << (false && false) << std::endl;

	return EXIT_SUCCESS;
}