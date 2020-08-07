#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: " << std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

void merge(int* arr, int start, int mid, int end) {   
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }

    while(i <= mid) {
        temp[k] = arr[i];
        i++;
        k++;
    }

    while(j <= end) {
        temp[k] = arr[j];
        j++;
        k++;
    }

    for(int i=start; i<=end; i++)
        arr[i] = temp[i-start];
}

void mergeSort(int* arr, int start, int end) {
    if(start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
