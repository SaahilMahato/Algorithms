#include "InsertionSort.hpp"

int main()
{
    InsertionSort s = InsertionSort(10);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();

    return 0;
}