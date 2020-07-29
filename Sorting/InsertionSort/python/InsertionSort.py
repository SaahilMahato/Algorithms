class InsertionSort:
    def __init_(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int, input("Enter the array: ").split()))

    def sort(self):
        for i in range(1, len(self.arr)):
            temp = self.arr[i]
            empty_index = i
            while empty_index > 0  and self.arr[empty_index-1] > temp:
                self.arr[empty_index] = self.arr[empty_index-1]
                empty_index -= 1
            self.arr[empty_index] = temp

    def print_array(self):
        print("Array is: " + " ".join([str(i) for i in self.arr]))


if __name__ == '__main__':
    s = InsertionSort()
    s.input()
    s.print_array()
    print("Sorting...")
    s.sort()
    s.print_array()