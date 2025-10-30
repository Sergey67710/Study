
#include <iostream>


int main() {
    setlocale(LC_ALL, "rus");
    int a, b, c;


    std::cout << "¬ведите первое число: ";
    std::cin >> a;
    std::cout << "¬ведите второе число: ";
    std::cin >> b;
    std::cout << "¬ведите третье число: ";
    std::cin >> c;


    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int mid = (a >= b && a <= c || a <= b && a >= c ? a : (b >= a && b <= c || b <= a && b >= c ? b : c));


    std::cout << "–езультат: " << max << " " << mid << " " << min << std::endl;

    return 0;
}