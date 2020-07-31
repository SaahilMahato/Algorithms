class SelectionSort:
    def __init__(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int,input('Enter the array: ').split()))

    def sort(self):
        min_index = 0
        temp = 0
        for i in range(0, len(self.arr)-1):
            min_index = i
            for j in range(i+1, len(self.arr)):
                if self.arr[j]<self.arr[min_index]:
                    min_index = j
            temp = self.arr[i]
            self.arr[i] = self.arr[min_index]
            self.arr[min_index] = temp

    def print_array(self):
        print("Array is: " + " ".join([str(i) for i in self.arr]))

if __name__ == '__main__':
    s = SelectionSort()
    s.input()
    s.print_array()
    print('Sorting...')
    s.sort()
    s.print_array()