#include<iostream>

class SelectionSort
{
    private:
        int *arr;
        int size;
    public:
        SelectionSort(int N)
        {
            this->size = N;
            this->arr = new int[size];
        } 

        void input()
        {
            std::cout<<"Enter the array: ";
            for(int i=0; i<this->size; i++)
                std::cin >> this->arr[i];
        }

        void sort()
        {
            int min_index, temp;
            for(int i=0; i<this->size-1; i++)
            {
                min_index = i;
                for(int j=i+1; j<this->size; j++)
                    if(this->arr[j]<this->arr[min_index])
                        min_index = j;
                temp = this->arr[i];
                this->arr[i] = this->arr[min_index];
                this->arr[min_index] = temp;
            }
        }

        void printArray()
        {
            std::cout<<"Array is: ";
            for(int i=0; i<size; i++)
                std::cout << this->arr[i] << " ";
            std::cout<<std::endl;
        }
};