#include <iostream>
#include <Windows.h>

int main()
{
	setlocale(LC_ALL, "rus");
	
	int sum{0};
	int num;

		while (true)
		{
		std::cout << "¬ведите целое число или число '0', чтобы закончить:" << std::endl;
		std::cin >> num;
			
			if (num == 0){
				break;
		}
		sum += num;
		}

	std::cout << "—умма: " << sum << std::endl;

	return EXIT_SUCCESS;
}