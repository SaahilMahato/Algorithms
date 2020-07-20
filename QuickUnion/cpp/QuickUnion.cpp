#include "QuickUnion.hpp"
#include <iostream>

int main()
{
    QuickUnion arr = QuickUnion(10);
    arr.Union(1,3);
    arr.Union(2,4);
    arr.Union(5,4);
    std::cout<<arr.connected(8,9)<<std::endl;
    std::cout<<arr.connected(2,5)<<std::endl;
    std::cout<<arr.connected(1,5)<<std::endl;
}
