#include "MergeSort.hpp"

int main() {
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size;
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout << "Sorting..." << std::endl;
    mergeSort(arr, 0, size-1);
    printArray(arr, size);
    delete[] arr;

    return 0;
}