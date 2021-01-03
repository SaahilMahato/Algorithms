#include "stack.hpp"

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

void Stack::push(int data)
{
    if (this->top_pointer < this->size-1)
    {
        this->top_pointer += 1;
        this->stack[this->top_pointer] = data;
    }
    else
        std::cout << "Stack is full" <<  std::endl;
}

int Stack::pop()
{
    this->top_pointer -= 1;
    return this->stack[this->top_pointer+1];
}

int Stack::top()
{
    return this->stack[this->top_pointer];
}

bool Stack::isEmpty()
{
    return this->top_pointer == -1;
}

bool Stack::isFull()
{
    return this->top_pointer == this->size-1;
}