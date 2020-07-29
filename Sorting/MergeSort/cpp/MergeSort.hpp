#include <iostream>

class MergeSort
{
    private:
        int *arr;
        int size;

    public:
        MergeSort(int N)
        {
            this->size = N;
            this->arr = new int[this->size];
        }

        void input()
        {
            std::cout<<"Enter the array: "<<std::endl;
            for(int i=0; i<this->size; i++)
                std::cin>>this->arr[i];
        }

        void merge(int l, int m, int h)
        {   
            int temp[h - l + 1];
            int i = l, j = m + 1, k = 0;

            while(i <= m && j <= h)
            {
                if(this->arr[i] <= this->arr[j])
                {
                    temp[k] = this->arr[i];
                    i++;
                }
                else
                {
                    temp[k] = this->arr[j];
                    j++;
                }
                k++;
            }

            while(i <= m)
            {
                temp[k] = this->arr[i];
                i++;
                k++;
            }

            while(j <= h)
            {
                temp[k] = this->arr[j];
                j++;
                k++;
            }

            for(int i=l; i <= h; i++)
                this->arr[i] = temp[i-l];
        }

        void mergeSort(int l, int h)
        {
            if(l < h)
            {
                int m = (l+h)/2;
                mergeSort(l, m);
                mergeSort(m + 1, h);
                merge(l, m, h);
            }
        }

        void sort()
        {
            mergeSort(0, this->size-1);
        }

        void printArray()
        {
            std::cout<<"Array is: ";
            for(int i=0; i<this->size; i++)
                std::cout<<this->arr[i]<<" ";
            std::cout<<std::endl;
        }
};