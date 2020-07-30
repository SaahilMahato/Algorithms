class QuickSort:
    def __init__(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int, input('Enter the array: ').split()))

    def partition(self, start, end):
        pivot = self.arr[end]
        p_index = start
        for i in range(start, end):
            if self.arr[i] <= pivot:
                temp = self.arr[i]
                self.arr[i] = self.arr[p_index]
                self.arr[p_index] = temp
                p_index += 1
        temp = self.arr[p_index]
        self.arr[p_index] = self.arr[end]
        self.arr[end] = temp
        return p_index

    def quick_sort(self, start, end):
        if start < end:
            p_index = self.partition(start, end)
            self.quick_sort(start, p_index-1)
            self.quick_sort(p_index+1, end)

    def sort(self):
        self.quick_sort(0, len(self.arr)-1)

    def print_array(self):
        print("Array is: " + ' '.join([str(i) for i in self.arr]))


if __name__ == '__main__':
    s = QuickSort()
    s.input()
    s.print_array()
    print('Sorting...')
    s.sort()
    s.print_array()
