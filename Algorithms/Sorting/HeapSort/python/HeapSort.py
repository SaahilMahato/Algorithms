import sys
sys.setrecursionlimit(1500)

def max_heapify(A, n, i):
    l = 2 * i + 1
    r = 2 * i + 2
    if l < n and A[i] < A[l]:
        largest = l
    else:
        largest = i
    if r < n and A[largest] < A[r]:
        largest = r
    if largest != i:
        A[i], A[largest] = A[largest], A[i]
        max_heapify(A, n, largest)

def heapSort(A, n): 
    for i in range(n//2-1, -1, -1): 
        max_heapify(A, n, i) 
    for i in range(n-1, 0, -1): 
        A[i], A[0] = A[0], A[i]
        max_heapify(A, i, 0) 


if __name__ == '__main__':
    A = list(map(int, input('Enter the array: ').split()))
    print('Array is: ' + ' '.join(str(i) for i in A))
    print('Sorting...')
    heapSort(A, len(A))
    print('Array is: ' + ' '.join(str(i) for i in A))