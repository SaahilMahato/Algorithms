#include "MergeSort.hpp"

int main()
{
    MergeSort s = MergeSort(10);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();
}