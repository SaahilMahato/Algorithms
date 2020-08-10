def selectionSort(arr):
    for i in range(0, len(arr)-1):
        min_index = i
        for j in range(i+1, len(arr)):
            if arr[j] < arr[min_index]:
                min_index = j
        temp = arr[i]
        arr[i] = arr[min_index]
        arr[min_index] = temp


if __name__ == '__main__':
    arr = list(map(int,input('Enter the array: ').split()))
    print("Array is: " + " ".join([str(i) for i in arr]))
    print('Sorting...')
    selectionSort(arr)
    print("Array is: " + " ".join([str(i) for i in arr]))