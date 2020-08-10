import sys
sys.setrecursionlimit(1500)

def partition(arr, start, end):
    pivot = arr[end]
    p_index = start
    for i in range(start, end):
        if arr[i] <= pivot:
            temp = arr[i]
            arr[i] = arr[p_index]
            arr[p_index] = temp
            p_index += 1
    temp = arr[p_index]
    arr[p_index] = arr[end]
    arr[end] = temp
    return p_index

def quick_sort(arr, start, end):
    if start < end:
        p_index = partition(arr, start, end)
        quick_sort(arr, start, p_index-1)
        quick_sort(arr, p_index+1, end)


if __name__ == '__main__':
    arr = list(map(int, input('Enter the array: ').split()))
    print("Array is: " + ' '.join([str(i) for i in arr]))
    print('Sorting...')
    quick_sort(arr, 0, len(arr)-1)
    print("Array is: " + ' '.join([str(i) for i in arr]))
