import java.util.Scanner;

public class Stack {

    private int[] stack;
    private int size;
    private int top_pointer = -1;

    public Stack(int size) {
        this.size = size;
        this.stack = new int[this.size];
    }

    public boolean isEmpty() {
        return this.top_pointer == -1;
    }

    public boolean isFull() {
        return this.top_pointer == this.size-1;
    }

    public void push(int data) {
        if (!isFull())
            this.stack[++top_pointer] = data;
        else
            System.out.println("Stack overflow");
    }

    public int pop() {
        if (!isEmpty())
            return this.stack[this.top_pointer--];
        else {
            System.out.println("Stack underflow");
            return 0;
        }
    }

    public int top() {
        if (!isEmpty()) 
            return this.stack[this.top_pointer];
        else {
            System.out.println("Error: Stack is empty");
            return 0;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the stack: ");
        int size = sc.nextInt();

        Stack my_stack = new Stack(size);

        System.out.println("Enter 1 to push to stack");
        System.out.println("Enter 2 to pop from stack");
        System.out.println("Enter 3 to get top of stack");
        System.out.println("Enter 4 to check if the stack is empty");
        System.out.println("Enter 5 to check if the stack is full");
        System.out.println("Enter -1 to quit program");

        int option = 0;
        int push_data;

        while (option != -1) {
            System.out.print("Enter your option: ");
            option = sc.nextInt();

            switch (option) {
                case 1:
                    System.out.print("Enter data to push to stack: ");
                    push_data = sc.nextInt();
                    my_stack.push(push_data);
                    break;

                case 2:
                    System.out.println(my_stack.pop());
                    break;
                
                case 3:
                    System.out.println(my_stack.top());
                    break;

                case 4:
                    System.out.println(my_stack.isEmpty());
                    break;

                case 5:
                    System.out.println(my_stack.isFull());
                    break;

                case -1:
                    System.out.println("Program ended");
                    break;

                default:
                    System.out.println("Please enter a valid input");
            }
        }
        sc.close();
    }
}