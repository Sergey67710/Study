
#include <iostream>


int main() {
    setlocale(LC_ALL, "rus");
    int a, b, c;


    std::cout << "������� ������ �����: ";
    std::cin >> a;
    std::cout << "������� ������ �����: ";
    std::cin >> b;
    std::cout << "������� ������ �����: ";
    std::cin >> c;


    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    int min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
    int mid = (a >= b && a <= c || a <= b && a >= c ? a : (b >= a && b <= c || b <= a && b >= c ? b : c));


    std::cout << "���������: " << max << " " << mid << " " << min << std::endl;

    return 0;
}