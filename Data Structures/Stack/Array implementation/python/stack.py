class Stack:
    def __init__(self, size):
        self.size = size
        self.stack = [None] * self.size
        self.top_pointer = -1

    def push(self, data):
        self.top_pointer += 1
        self.stack[self.top_pointer] = data

    def pop(self):
        self.top_pointer -= 1
        return self.stack[self.top_pointer+1]

    def top(self):
        return self.stack[self.top_pointer]

    def isEmpty(self):
        return self.top_pointer == -1

    def isFull(self):
        return self.top_pointer == self.size-1


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
            if my_stack.isFull():
                print("Error: Stack is full. Can't push to stack")
            else:
                push_data = int(input("Enter data to push to stack: "))
                my_stack.push(push_data)

        elif option == 2:
            if my_stack.isEmpty():
                print("Error: Stack is empty. Can't pop from stack")
            else:
                print(my_stack.pop(), "popped from stack")

        elif option == 3:
            if my_stack.isEmpty():
                print("Error: Stack is empty. Can't get top of stack")
            else:
                print("The top of stack is:", my_stack.top())

        elif option == 4:
            if my_stack.isEmpty():
                print("Stack is empty")
            else:
                print("Stack is not empty")

        elif option == 5:
            if my_stack.isFull():
                print("Stack is full")
            else:
                print("Stack is not full")

        elif option == -1:
            print("Program ended")

        else:
            print("Please enter a valid input")
    