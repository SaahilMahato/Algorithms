def insertionSort(arr):
    for i in range(1, len(arr)):
        temp = arr[i]
        empty_index = i
        while empty_index > 0  and arr[empty_index-1] > temp:
            arr[empty_index] = arr[empty_index-1]
            empty_index -= 1
        arr[empty_index] = temp


if __name__ == '__main__':
    arr = list(map(int, input("Enter the array: ").split()))
    print("Array is: " + " ".join([str(i) for i in arr]))
    print("Sorting...")
    insertionSort(arr)
    print("Array is: " + " ".join([str(i) for i in arr]))