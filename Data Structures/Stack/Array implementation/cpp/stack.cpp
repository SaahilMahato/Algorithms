#include "stack.hpp"
#include <iostream>

Stack::Stack(int size)
{
    this->size = size;
    this->stack = new int[this->size];
    this->top_pointer = -1;
}

Stack::~Stack()
{
    delete[] stack;
}

bool Stack::isEmpty()
{
    return this->top_pointer == -1;
}

bool Stack::isFull()
{
    return this->top_pointer == this->size-1;
}

void Stack::push(int data)
{
    if (!isFull())
        this->stack[++this->top_pointer] = data;
    else
        std::cout << "Stack Overflow" << std::endl;  
}

int Stack::pop()
{
    if(!isEmpty())
    {
        return this->stack[this->top_pointer--];
    }
    else
    {
        std::cout << "Stack Underflow" << std::endl;
        return 0;
    }  
}

int Stack::top()
{
    if (!isEmpty())
        return this->stack[this->top_pointer];
    else
    {
        std::cout << "Error: Stack is empty" << std::endl;
        return 0;
    }
}


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
                std::cout << "Enter data to push to stack: ";
                std::cin >> push_data;
                my_stack.push(push_data);
                break;

            case 2:
                std::cout << my_stack.pop() << std::endl;
                break;

            case 3:
                std::cout << my_stack.top() << std::endl;
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
                std::cout << "Please enter a valid input" << std::endl;
        }
    }
    
    EXIT_SUCCESS;
}