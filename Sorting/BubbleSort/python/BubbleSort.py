class BubbleSort:
    def __init__(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int, input('Enter the array: ').split()))

    def sort(self):
        for i in range(1, len(self.arr)):
            flag = True
            for j in range(0, len(self.arr)-i):
                if self.arr[j] > self.arr[j+1]:
                    temp = self.arr[j]
                    self.arr[j] = self.arr[j+1]
                    self.arr[j+1] = temp
                    flag = False
            if flag: break

    def print_array(self):
        print("Array is: " + " ".join([str(i) for i in self.arr]))


if __name__ == '__main__':
    s = BubbleSort()
    s.input()
    s.print_array()
    print('Sorting...')
    s.sort()
    s.print_array()
