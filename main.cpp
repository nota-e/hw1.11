#include <iostream>
#include "math_ops.h"
int main() {
    int a, b;
    std::cout << "Введите два числа: ";
    std::cin >> a >> b;
    std::cout << "Сумма: " << add(a, b) << std::endl;
    std::cout << "Разность: " << subtract(a, b) << std::endl;
    std::cout << "Произведение: " << multiply(a, b) << std::endl;
    double q;
    if (divide(a, b, q))
        std::cout << "Частное: " << q << std::endl;
    else
        std::cout << "Деление на ноль!" << std::endl;
    return 0;
}