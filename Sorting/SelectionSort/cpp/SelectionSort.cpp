#include "SelectionSort.hpp"

int main()
{
    SelectionSort s = SelectionSort(10);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();

    return 0;
}