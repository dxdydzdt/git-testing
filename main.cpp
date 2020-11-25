#include "includes.hpp"

int main() {
    std::setlocale(LC_ALL, "Russian");

    int a, b;

    // enter a
    std::cout << "Enter a: ";
    std::cin >> a;

    // enter b
    std::cout << "Enter b: ";
    std::cin >> b;

    // output the sum of a & b
    std::cout << a << " + " << b << " = " << a + b << std::endl;

    system("pause");
    return 0;
}