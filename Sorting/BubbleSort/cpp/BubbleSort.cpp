#include "BubbleSort.hpp"

int main()
{
    BubbleSort s = BubbleSort(10);
    s.input();
    s.printArray();
    std::cout<<"Sorting..."<<std::endl;
    s.sort();
    s.printArray();
}