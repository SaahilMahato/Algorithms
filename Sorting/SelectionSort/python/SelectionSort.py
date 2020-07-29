class SelectionSort:
    def __init__(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int,input('Enter the array: ').split()))

    def sort(self):
        for i in range(0, len(self.arr)):
            for j in range(i+1, len(self.arr)):
                if self.arr[j]<self.arr[i]:
                    temp = self.arr[i]
                    self.arr[i] = self.arr[j]
                    self.arr[j] = temp

    def print_array(self):
        print("Array is: " + " ".join([str(i) for i in self.arr]))

if __name__ == '__main__':
    s = SelectionSort()
    s.input()
    s.print_array()
    print('Sorting...')
    s.sort()
    s.print_array()