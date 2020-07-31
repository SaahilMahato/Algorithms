#include "InsertionSort.hpp"

int main()
{
    std::cout<<"Enter the size of array: ";
    int N;
    std::cin>>N;
    InsertionSort s = InsertionSort(N);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();

    return 0;
}