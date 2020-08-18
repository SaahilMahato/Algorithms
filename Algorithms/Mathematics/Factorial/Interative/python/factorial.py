def factorial(n):
    fact = 1
    if n > 1:
        for i in range(2, n+1):
            fact *= i
    return fact

if __name__ == '__main__':
    n = int(input("Enter the number: "))
    print(f"Factorial of {n} is: {factorial(n)}")