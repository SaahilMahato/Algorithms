#include "InsertionSort.hpp"

int main()
{
    InsertionSort s = InsertionSort(10);
    s.input();
    s.printArray();
    s.sort();
    s.printArray();

    return 0;
}