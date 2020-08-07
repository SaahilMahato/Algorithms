def count(arr):
    count = 0
    for i in range(0, len(arr)-1):
        for j in range(i+1, len(arr)):
            if arr[i] > arr[j]:
                count += 1
    return count


if __name__ == '__main__':
    arr = list(map(int, input('Enter the array: ').split()))
    print('The array is: ' + ' '.join([str(i) for i in arr]))
    print("Number of inversions:", count(arr))
