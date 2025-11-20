#include <iostream>
#include <Windows.h>

namespace Sum 
{
    int calc(int x, int y) 
    {
        return x + y;
    }
}
namespace Diff 
{
    int calc(int x, int y) 
    {
        return x - y;
    }
}
namespace Multi 
{
    int calc(int x, int y) 
    {
        return x * y;
    }
}
namespace Div 
{
    int calc(int x, int y) 
    {
        return x / y;
    }
}

int main() 
{
    setlocale(LC_ALL, "rus");

    int x = 6, y = 9;
    std::cout << "x = " << x << ", y = " << y << std::endl;
    std::cout << "Сложение:  " << Sum::calc(x, y) << std::endl;
    std::cout << "Вычитание: " << Diff::calc(x, y) << std::endl;
    std::cout << "Умножение: " << Multi::calc(x, y) << std::endl;
    std::cout << "Деление:   " << Div::calc(x, y) << std::endl;

    return EXIT_SUCCESS;
}