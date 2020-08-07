#include <iostream>

void input(int* arr, int size) {
    std::cout<< "Enter the array: "<< std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

void bubbleSort(int* arr, int size) {
    bool flag;
    int temp;
    for(int i=1; i<size; i++) {
        flag = true;
        for(int j=0; j<size-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = false;
            }
        }
        if(flag) break;
    }
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}