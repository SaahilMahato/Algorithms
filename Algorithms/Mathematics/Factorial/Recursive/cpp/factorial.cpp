#include <iostream>

unsigned long factorial(unsigned int n) {
    unsigned long fact = n;
    if(n < 2)
        return 1;
    else
        return fact * factorial(n-1); 
}

int main() {
    std::cout << "Enter the number: ";
    unsigned int n;
    std::cin >> n;
    std::cout << "Factorial of " << n << " is: " << factorial(n) << std::endl;

    return 0;
}
