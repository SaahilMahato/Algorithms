#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: " << std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

int count(int* arr, int size) {
    int count = 0;
    for(int i=0; i<size-1; i++)
        for(int j=i+1; j<size; j++)
            if(arr[i] > arr[j])
                count++;
    return count;
}

void printArray(int* arr, int size) {
    std::cout << "The array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
