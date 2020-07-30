#include "Karatsuba.hpp"

int main()
{
    Karatsuba k = Karatsuba();
    long x, y;
    std::cout<<"Enter x: ";
    std::cin>>x;
    std::cout<<"Enter y: ";
    std::cin>>y;
    std::cout<<k.multiply(x, y)<<std::endl;
}