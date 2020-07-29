import sys

class MergeSort:
    def __init__(self):
        self.arr = []
        sys.setrecursionlimit(1500)

    def input(self):
        self.arr = list(map(int,input('Enter the array: ').split()))

    def merge(self, l, m, h):
        temp = [None]*(h-l+1)
        i = l 
        j = m + 1
        k = 0

        while i <= m and j <= h:
            if self.arr[i] <= self.arr[j]:
                temp[k] = self.arr[i]
                i += 1
            else:
                temp[k] = self.arr[j]
                j += 1
            k += 1

        while i <= m:
            temp[k] = self.arr[i]
            i += 1
            k += 1

        while j <= h:
            temp[k] = self.arr[j]
            j += 1
            k += 1

        for i in range(l, h+1):
            self.arr[i] = temp[i-l]

    def mergeSort(self, l, h):
        if l < h:
            m = (l + h) // 2
            self.mergeSort(l, m)
            self.mergeSort(m+1, h)
            self.merge(l, m, h)

    def sort(self):
        self.mergeSort(0, len(self.arr)-1)

    def print_array(self):
        print('Array is: ' + ' '.join([str(i) for i in self.arr]))


if __name__ == '__main__':
    s = MergeSort()
    s.input()
    s.print_array()
    print('Sorting...')
    s.sort()
    s.print_array()
