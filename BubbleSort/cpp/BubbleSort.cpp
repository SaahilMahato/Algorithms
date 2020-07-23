#include "BubbleSort.hpp"

int main()
{
    BubbleSort s = BubbleSort(10);
    s.input();
    s.printArray();
    s.sort();
    s.printArray();
}