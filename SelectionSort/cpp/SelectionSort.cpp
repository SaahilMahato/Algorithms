#include "SelectionSort.hpp"

int main()
{
    SelectionSort s = SelectionSort(10);
    s.input();
    s.printArray();
    s.sort();
    s.printArray();

    return 0;
}