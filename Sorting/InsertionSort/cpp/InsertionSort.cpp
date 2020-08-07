#include "InsertionSort.hpp"

int main()
{
    std::cout << "Enter the size of array: ";
    int size;
    std::cin >> size;
    int* arr = new int[size];
    input(arr, size);
    printArray(arr, size);
    std::cout<<"Sorting..."<<std::endl;
    insertionSort(arr, size);
    printArray(arr, size);
    delete[] arr;
    
    return 0;
}