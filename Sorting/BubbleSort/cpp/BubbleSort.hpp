#include <iostream>

class BubbleSort
{
    private:
        int *arr;
        int size;
    
    public:
        BubbleSort(int N)
        {
            this->size = N;
            this->arr = new int[this->size];
        }

        void input()
        {
            std::cout<< "Enter the array: "<< std::endl;
            for(int i=0; i<this->size; i++)
                std::cin>> this->arr[i];
        }

        void sort()
        {
            bool flag;
            int temp;
            for(int i=1; i<this->size; i++)
            {
                flag = true;
                for(int j=0; j<this->size-i; j++)
                {
                    if(this->arr[j] > this->arr[j+1])
                    {
                        temp = this->arr[j];
                        this->arr[j] = this->arr[j+1];
                        this->arr[j+1] = temp;
                        flag = false;
                    }
                }
                if(flag) break;
            }
        }

        void printArray()
        {
            std::cout<< "Array is: ";
            for(int i=0; i<this->size; i++)
                std::cout<< this->arr[i]<< " ";
            std::cout<< std::endl;
        }
};
