# This implementation doesn't work for negative numbers

import sys

class Karatsuba():
    def __init__(self):
      sys.setrecursionlimit(1500)  

    def multiply(self, x, y):
        if x < 10 or y < 10:
            return x*y
        else:
            n = max(len(str(x)), len(str(y)))
            m = n//2

            a = x // 10**m
            b = x % 10**m
            c = y // 10**m
            d = y % 10**m

            ac = self.multiply(a, c)
            bd = self.multiply(b, d)
            sum_ad_bc = self.multiply(a+b, c+d) - ac - bd

            result = ac * 10**(2*m) + (sum_ad_bc * 10**m) + bd

            return result


if __name__ == '__main__':
    x = int(input('Enter x: '))
    y = int(input('Enter y: '))
    print(Karatsuba().multiply(x, y))
