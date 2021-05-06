def sum_n_numbers(n):
    return n*(n+1)//2

if __name__ == '__main__':
    n = int(input("Enter the number: "))
    print(f"Sum of {n} natural numbers is: {sum_n_numbers(n)}")
    