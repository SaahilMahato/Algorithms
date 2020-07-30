// This implementation doesn't work for negative numbers

#include <iostream>
#include <string>
#include <math.h>

class Karatsuba
{
    public:
        long multiply(long x, long y)
        {
            if(x < 10 || y < 10)
                return x * y;
            else
            {
                int len_x = std::to_string(x).length();
                int len_y = std::to_string(y).length();
                int n = std::max(len_x, len_y);
                int m = n / 2;

                long a = x / (long)pow(10, m);
                long b = x % (long)pow(10, m);
                long c = y / (long)pow(10, m);
                long d = y % (long)pow(10, m);

                long ac = multiply(a, c);
                long bd = multiply(b, d);
                long sum_ad_bc = multiply(a+b, c+d) - ac - bd;

                long result = ac * (long)pow(10, 2*m) + (sum_ad_bc * (long)pow(10, m)) + bd;

                return result;
            }
        }
};