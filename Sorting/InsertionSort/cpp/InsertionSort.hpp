#include <iostream>

class InsertionSort
{
    private:
        int *arr;
        int size;

    public:
        InsertionSort(int N)
        {
            this->size = N;
            this->arr = new int[this->size];
        }

        void input()
        {
            std::cout<< "Enter the array: "<< std::endl;
            for(int i=0; i<this->size; i++)
                std::cin >> this->arr[i];
        }

        void sort()
        {
            for(int i=1; i<this->size; i++)
            {
                int temp = this->arr[i];
                int empty_index = i;
                while(empty_index > 0 && this->arr[empty_index - 1] > temp)
                {
                    this->arr[empty_index] = this->arr[empty_index-1];
                    empty_index--;
                }
                this->arr[empty_index] = temp;
            }
        }

        void printArray()
        {
            std::cout<< "Array is: ";
            for(int i=0; i<this->size; i++)
            {
                std::cout << this->arr[i]<< " ";
            }
            std::cout << std::endl;
        } 
};