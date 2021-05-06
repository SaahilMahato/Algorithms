#include <iostream>

void input(int* arr, int size) {
    std::cout << "Enter the array: " << std::endl;
    for(int i=0; i<size; i++)
        std::cin >> arr[i];
}

int countSplitInversions(int* arr, int start, int mid, int end) {   
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    int count = 0;

    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp[k] = arr[i];
            i++;
        }
        else {
            temp[k] = arr[j];
            j++;
            count += (mid - i + 1);
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

    return count; 
}

int countInversions(int* arr, int start, int end) {
    int count = 0;
    if(start < end) {
        int mid = (start + end) / 2;
        count += countInversions(arr, start, mid);
        count += countInversions(arr, mid + 1, end);
        count += countSplitInversions(arr, start, mid, end);
    }
    return count;
}

void printArray(int* arr, int size) {
    std::cout << "Array is: ";
    for(int i=0; i<size; i++)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
}
