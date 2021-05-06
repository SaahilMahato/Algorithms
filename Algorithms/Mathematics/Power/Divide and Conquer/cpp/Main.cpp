#include <iostream>

long double power(float n, int p) {
    if (p == 0)
        return 1.0;
    long double result = power(n, p/2);
    if (p%2 == 0)
        return result * result;
    if (p < 0)
        return result * result / n;
    return n * result * result;
}

int main() {
    std::cout << "Enter the number: ";
    float n;
    std::cin >> n;
    std::cout << "Enter the power: ";
    int p;
    std::cin >> p;
    std::cout << power(n, p) << std::endl;

    EXIT_SUCCESS;
}