#ifndef STACK_H
#define STACK_H

class Stack
{
    private:
        int* stack;
        int size;
        int top_pointer;
    
    public:
        Stack(int size);
        ~Stack();
        bool isEmpty();
        bool isFull();
        void push(int data);
        int pop();
        int top();
};

#endif