#include "Inversions.hpp"

int main() {
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout << "Number of inversions: " << count(arr, size) << std::endl;
    delete[] arr;
}