#include <iostream>

unsigned long sumNNumbers(unsigned int n) {
    return n*(n+1)/2;
}

int main() {
    std::cout << "Enter the number: ";
    unsigned int n;
    std::cin >> n;
    std::cout << "The sum of " << n << " natural numbers is: " << sumNNumbers(n) << std::endl;

    return 0;
}
