#include "stack.hpp"

int main()
{
    std::cout << "Enter the size of stack: ";
    int size;
    std::cin >> size;
    Stack my_stack(size);

    std::cout << "Enter 1 to push to stack" << std::endl;
    std::cout << "Enter 2 to pop from stack" << std::endl;
    std::cout << "Enter 3 to get top of stack" << std::endl;
    std::cout << "Enter 4 to check if the stack is empty" << std::endl;
    std::cout << "Enter 5 to check if the stack is full" << std::endl;
    std::cout << "Enter -1 to quit program" << std::endl;

    int option = 0;
    int push_data;

    while (option != -1)
    {
        std::cout << "Enter your option: ";
        std::cin >> option;

        switch(option)
        {
            case 1:
                if (my_stack.isFull())
                    std::cout << "Error: Stack is full. Can't push to stack." << std::endl;
                else
                {
                    std::cout << "Enter data to push to stack: ";
                    std::cin >> push_data;
                    my_stack.push(push_data);
                }
                break;

            case 2:
                if (my_stack.isEmpty())
                    std::cout << "Error: Stack is empty. Can't pop from stack" << std::endl;
                else
                    std::cout << my_stack.pop() << " popped from stack" << std::endl;
                break;

            case 3:
                if (my_stack.isEmpty())
                    std::cout << "Error: Stack is empty. Can't get top of stack" << std::endl;
                else
                    std::cout << "The top of stack is: " << my_stack.top() << std::endl;
                break;

            case 4:
                if (my_stack.isEmpty())
                    std::cout << "Stack is empty" << std::endl;
                else
                    std::cout << "Stack is not empty" << std::endl;
                break;

            case 5:
                if (my_stack.isFull())
                    std::cout << "Stack is full" << std::endl;
                else
                    std::cout << "Stack is not full" << std::endl;
                break;

            case -1:
                std::cout << "Program ended" << std::endl;
                break;

            default:
                std::cout << "Please enter a valid input." << std::endl;
        }
    }
    
    EXIT_SUCCESS;
}