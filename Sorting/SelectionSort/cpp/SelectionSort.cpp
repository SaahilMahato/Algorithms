#include "SelectionSort.hpp"

int main()
{
    int N;
    std::cout<<"Enter the size of the array: ";
    std::cin>>N; 
    SelectionSort s = SelectionSort(N);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();

    return 0;
}