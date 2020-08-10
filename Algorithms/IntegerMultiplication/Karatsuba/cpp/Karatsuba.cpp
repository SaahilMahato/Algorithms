#include "Karatsuba.hpp"

int main() {
    long x, y;
    std::cout << "Enter x: ";
    std::cin >> x;
    std::cout << "Enter y: ";
    std::cin >> y;
    std::cout << multiply(x, y) << std::endl;

    return 0;
}