import sys
sys.setrecursionlimit(1500)


def power(n, p):
    if p == 0:
        return 1.0
    result = power(n , int(p/2))
    if p%2 == 0:
        return result * result
    if p < 0:
        return result * result / n
    return n * result * result


if __name__ == '__main__':
    n = float(input("Enter the number: "))
    p = int(input("Enter the power: "))
    print(power(n, p))
