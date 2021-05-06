#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: " << std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

void selectionSort(int* arr, int size) {
    int min_index, temp;
    for(int i=0; i<size-1; i++) {
        min_index = i;
        for(int j=i+1; j<size; j++)
            if(arr[j] < arr[min_index])
                min_index = j;
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
