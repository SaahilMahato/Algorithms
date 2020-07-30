#include "QuickSort.hpp"

int main()
{
    QuickSort s = QuickSort(10);
    s.input();
    s.printArray();
    std::cout<< "Sorting..."<< std::endl;
    s.sort();
    s.printArray();
}
