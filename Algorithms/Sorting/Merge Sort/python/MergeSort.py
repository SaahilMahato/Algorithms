import sys
sys.setrecursionlimit(1500)

def merge(arr, start, mid, end):
    temp = [None]*(end-start+1)
    i = start 
    j = mid + 1
    k = 0

    while i <= mid and j <= end:
        if arr[i] <= arr[j]:
            temp[k] = arr[i]
            i += 1
        else:
            temp[k] = arr[j]
            j += 1
        k += 1

    while i <= mid:
        temp[k] = arr[i]
        i += 1
        k += 1

    while j <= end:
        temp[k] = arr[j]
        j += 1
        k += 1

    for i in range(start, end+1):
        arr[i] = temp[i-start]

def mergeSort(arr, start, end):
    if start < end:
        mid = (start + end) // 2
        mergeSort(arr, start, mid)
        mergeSort(arr, mid+1, end)
        merge(arr, start, mid, end)


if __name__ == '__main__':
    arr = list(map(int,input('Enter the array: ').split()))
    print('Array is: ' + ' '.join([str(i) for i in arr]))
    print('Sorting...')
    mergeSort(arr, 0, len(arr)-1)
    print('Array is: ' + ' '.join([str(i) for i in arr]))
