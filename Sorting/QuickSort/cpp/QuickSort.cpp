#include "QuickSort.hpp"

int main()
{
    std::cout<<"Enter the size of the array: ";
    int N;
    std::cin>>N;
    QuickSort s = QuickSort(N);
    s.input();
    s.printArray();
    std::cout<< "Sorting..."<< std::endl;
    s.sort();
    s.printArray();
}
