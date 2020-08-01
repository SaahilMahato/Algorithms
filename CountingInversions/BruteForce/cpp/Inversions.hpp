#include <iostream>

class Inversions
{
    private:
        int *arr;
        int size;

    public:
        Inversions(int N)
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

        int count()
        {
            int count = 0;
            for(int i=0; i<this->size-1; i++)
                for(int j=i+1; j<this->size; j++)
                    if(this->arr[i] > this->arr[j])
                        count++;
            return count;
        }

        void printArray()
        {
            std::cout<< "The array is: ";
            for(int i=0; i<this->size; i++)
                std::cout<< this->arr[i]<< " ";
            std::cout<<std::endl;
        }
};
