#include "BubbleSort.hpp"

int main()
{
    std::cout<<"Enter the size of the array: ";
    int N;
    std::cin>>N;
    BubbleSort s = BubbleSort(N);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();
}