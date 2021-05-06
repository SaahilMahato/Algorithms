#include "SelectionSort.hpp"

int main() {
    std::cout << "Enter the size of the array: ";
    int size;
    std::cin >> size; 
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout << "Sorting..." << std::endl;
    selectionSort(arr, size);
    printArray(arr, size);
    delete[] arr;
    
    return 0;
}