def bubbleSort(arr):
    for i in range(1, len(arr)):
        flag = True
        for j in range(0, len(arr)-i):
            if arr[j] > arr[j+1]:
                temp = arr[j]
                arr[j] = arr[j+1]
                arr[j+1] = temp
                flag = False
        if flag: break


if __name__ == '__main__':
    arr = list(map(int, input('Enter the array: ').split()))
    print("Array is: " + " ".join([str(i) for i in arr]))
    print('Sorting...')
    bubbleSort(arr)
    print("Array is: " + " ".join([str(i) for i in arr]))
