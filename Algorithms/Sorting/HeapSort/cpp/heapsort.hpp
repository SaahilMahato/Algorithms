#include <iostream>

void maxHeapify(int* arr, int n, int i) {
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    int largest;
    if (l < n && arr[i] < arr[l])
        largest = l;
    else
        largest = i;
    if (r < n && arr[largest] < arr[r])
        largest = r;
    if (largest != i) {
        int temp;
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        maxHeapify(arr, n, largest);
    } 
}

void heapSort(int* arr, int n) {
    for(int i=n/2-1; i>-1; i--)
        maxHeapify(arr, n, i);
    int temp;
    for(int i=n-1; i>0; i--) {
        temp = arr[i];
        arr[i] = arr[0];
        arr[0] = temp;
        maxHeapify(arr, i, 0);
    }
}

void input(int* arr, int size) {
    std::cout << "Enter the array: "<< std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}