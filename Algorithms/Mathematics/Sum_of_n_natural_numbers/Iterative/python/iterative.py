def sum_n_numbers(n):
    sum = 0
    for i in range(1, n+1):
        sum += i
    return sum

if __name__ == '__main__':
    n = int(input("Enter the number: "))
    print(f"Sum of {n} natural numbers is: {sum_n_numbers(n)}")
    