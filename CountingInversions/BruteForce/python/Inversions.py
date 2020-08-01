class Inversions:
    def __init__(self):
        self.arr = []

    def input(self):
        self.arr = list(map(int, input('Enter the array: ').split()))

    def count(self):
        count = 0
        for i in range(0, len(self.arr)-1):
            for j in range(i+1, len(self.arr)):
                if self.arr[i] > self.arr[j]:
                    count += 1
        return count

    def print_array(self):
        print('The array is: ' + ' '.join([str(i) for i in self.arr]))


if __name__ == '__main__':
    i = Inversions()
    i.input()
    i.print_array()
    print("Number of inversions:", i.count())
