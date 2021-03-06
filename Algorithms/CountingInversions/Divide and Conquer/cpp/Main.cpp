#include "Inversions.hpp"

int main() {
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout << "Counting..." << std::endl;
    std::cout << "Number of Inversions: " << countInversions(arr, 0, size-1) << std::endl;
    delete[] arr;

    return 0;
}