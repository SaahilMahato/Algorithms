#include <iostream>

unsigned long sumNNumbers(unsigned int n) {
    unsigned long sum = 0;
    for(int i=1; i<=n; i++)
        sum += i;
    return sum;
}

int main() {
    std::cout << "Enter the number: ";
    unsigned int n;
    std::cin >> n;
    std::cout << "The sum of " << n << " natural numbers is: " << sumNNumbers(n) << std::endl;
    
    return 0;
}