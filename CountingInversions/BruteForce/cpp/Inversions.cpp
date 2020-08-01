#include "Inversions.hpp"

int main()
{
    std::cout<< "Enter the size of the array: ";
    int N;
    std::cin>> N;
    Inversions i = Inversions(N);
    i.input();
    i.printArray();
    std::cout<< "Number of inversions: "<< i.count()<< std::endl;
}