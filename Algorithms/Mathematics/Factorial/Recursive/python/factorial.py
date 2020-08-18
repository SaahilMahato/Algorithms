import sys
sys.setrecursionlimit(1500)

def factorial(n):
    fact = n
    if n < 2:
        return 1
    else:
        return fact * factorial(n-1)

if __name__ == '__main__':
    n = int(input("Enter the number: "))
    print(f"Factorial of {n} is {factorial(n)}")
    