#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: "<< std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

void insertionSort(int* arr, int size) {
    int temp, empty_index;
    for(int i=1; i<size; i++) {
        temp = arr[i];
        empty_index = i;
        while(empty_index > 0 && arr[empty_index - 1] > temp) {
            arr[empty_index] = arr[empty_index-1];
            empty_index--;
        }
        arr[empty_index] = temp;
    }
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
