class Stack:
    def __init__(self, size):
        self.size = size
        self.stack = [None] * self.size
        self.top_pointer = -1

    def isEmpty(self):
        return self.top_pointer == -1

    def isFull(self):
        return self.top_pointer == self.size-1

    def push(self, data):
        if not self.isFull():
            self.top_pointer += 1
            self.stack[self.top_pointer] = data
        else:
            print("Stack overflow")

    def pop(self):
        if not self.isEmpty():
            temp = self.stack[self.top_pointer]
            self.top_pointer -= 1
            return temp
        else:
            print("Stack underflow")

    def top(self):
        if not self.isEmpty():
            return self.stack[self.top_pointer]
        else:
            print("Error: Stack is empty")

    
if __name__ == '__main__':
    size = int(input('Enter the size of stack: '))
    my_stack = Stack(size)

    print('Enter 1 to push to stack')
    print('Enter 2 to pop from stack')
    print('Enter 3 to get top of stack')
    print('Enter 4 to check if the stack is empty')
    print('Enter 5 to check if the stack is full')
    print('Enter -1 to quit program')

    option = 0
    push_data = None

    while option != -1:
        option = int(input('Enter your option: '))

        if option == 1:
            push_data = int(input("Enter data to push to stack: "))
            my_stack.push(push_data)

        elif option == 2:
                print(my_stack.pop())

        elif option == 3:
            print(my_stack.top())

        elif option == 4:
            print(my_stack.isEmpty())

        elif option == 5:
            print(my_stack.isFull())

        elif option == -1:
            print("Program ended")

        else:
            print("Please enter a valid input")
    