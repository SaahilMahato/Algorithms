#include <iostream>

unsigned long factorial(unsigned int n) {
    unsigned long fact = 1;
    if(n > 1)
        for(int i=2; i<=n; i++)
            fact *= i;
    return fact;
}

int main() {
    std::cout << "Enter the number: ";
    unsigned int n;
    std::cin >> n;
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    return 0;
}