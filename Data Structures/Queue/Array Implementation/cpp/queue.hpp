#ifndef QUEUE_H
#define QUEUE_H

class Queue 
{
    private:
        int size;
        int* queue;
        int head_pointer;
        int tail_pointer;

    public:
        Queue(int size);
        ~Queue();
        bool isEmpty();
        bool isFull();
        void enque(int push_data);
        int deque();
        int head();
        int tail();
};

#endif
