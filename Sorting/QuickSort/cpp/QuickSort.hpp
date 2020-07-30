#include <iostream>

class QuickSort
{
    private:
        int *arr;
        int size;

    public:
        QuickSort(int N)
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

        int partition(int start, int end)
        {
            int pivot = this->arr[end];
            int p_index = start;
            for(int i=start; i<end; i++)
            {
                if(this->arr[i] <= pivot)
                {
                    int temp = this->arr[i];
                    this->arr[i] = this->arr[p_index];
                    this->arr[p_index] = temp;
                    p_index++;
                }
            }
            int temp = this->arr[p_index];
            this->arr[p_index] = this->arr[end];
            this->arr[end] = temp;
            return p_index;
        }

        void quickSort(int start, int end)
        {
            if(start < end)
            {
                int p_index = partition(start, end);
                quickSort(start, p_index-1);
                quickSort(p_index+1, end);
            }
        }

        void sort()
        {
            quickSort(0, this->size-1);
        }

        void printArray()
        {
            std::cout<< "The array is: ";
            for(int i=0; i<this->size; i++)
                std::cout<< this->arr[i]<< " ";
            std::cout<< std::endl; 
        }
};