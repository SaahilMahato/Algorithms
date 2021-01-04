class Stack
{
    private:
        int* stack;
        int size;
        int top_pointer;
    
    public:
        Stack(int size);

        ~Stack();

        void push(int data);

        int pop();

        int top();

        bool isEmpty();

        bool isFull();
};
