#include <iostream>

int main() 
{
	int var1{};
		std::cout << "int:" << '\t' << '\t' << &var1 << '\t' << sizeof(var1) << std::endl;

	short var2{};
		std::cout << "short:" << '\t' << '\t' << &var2 << '\t' << sizeof(var2) << std::endl;

	long var3{};
		std::cout << "long:" << '\t' << '\t' << &var3 << '\t' << sizeof(var3) << std::endl;

	long long var4{};
		std::cout << "long long:" << '\t' << &var4 << '\t' << sizeof(var4) << std::endl;

	float var5{};
		std::cout << "float:" << '\t' << '\t' << &var5 << '\t' << sizeof(var5) << std::endl;

	double var6{};
		std::cout << "double:" << '\t' << '\t' << &var6 << '\t' << sizeof(var6) << std::endl;

	long double var7{};
		std::cout << "long double:" << '\t' << &var7 << '\t' << sizeof(var7) << std::endl;

	bool var8{};
		std::cout << "bool:" << '\t' << '\t' << &var8 << '\t' << sizeof(var8) << std::endl;

	return EXIT_SUCCESS;
}