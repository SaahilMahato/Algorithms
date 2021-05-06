#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: " << std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

int partition(int* arr, int start, int end) {
    int pivot = arr[end];
    int p_index = start;
    int temp;
    for(int i=start; i<end; i++) {
        if(arr[i] <= pivot) {
            temp = arr[i];
            arr[i] = arr[p_index];
            arr[p_index] = temp;
            p_index++;
        }
    }
    temp = arr[p_index];
    arr[p_index] = arr[end];
    arr[end] = temp;
    return p_index;
}

void quickSort(int* arr, int start, int end) {
    if(start < end) {
        int p_index = partition(arr, start, end);
        quickSort(arr, start, p_index-1);
        quickSort(arr, p_index+1, end);
    }
}

void printArray(int* arr, int size) {
    std::cout << "The array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl; 
}