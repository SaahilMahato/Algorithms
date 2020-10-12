#include "heapsort.hpp"

int main() {
    std::cout << "Enter the size of array: ";
    int size;
    std::cin >> size;
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout << "Sorting..." << std::endl;
    heapSort(arr, size);
    printArray(arr, size);
    delete[] arr;
    
    EXIT_SUCCESS;
}