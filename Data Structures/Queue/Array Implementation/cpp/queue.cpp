#include "queue.hpp"
#include <iostream>

Queue::Queue(int size)
{
    this->size = size;
    this->queue = new int[this->size];
    this->head_pointer = -1;
    this->tail_pointer = -1;
}

Queue::~Queue()
{
    delete[] this->queue;
}

bool Queue::isEmpty()
{
    return head_pointer == -1 && tail_pointer == -1;
}

bool Queue::isFull()
{
    
}

void Queue::enque(int push_data)
{

}

int main()
{
    int size;
    std::cout << "Enter the size of the queue: ";
    std::cin >> size;
    Queue queue(size);

    

    EXIT_SUCCESS;
}