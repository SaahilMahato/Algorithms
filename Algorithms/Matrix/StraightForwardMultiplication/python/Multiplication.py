import numpy as np

def input_matrix(m, r, c):
    print('Enter matrix:')
    for i in range(r):
        for j in range(c):
            m[i][j] = int(input(f'Enter element [{i+1},{j+1}]: '))
    print()
        
def multiply(m1, m2, r1, c1, c2):
    temp = np.zeros(shape=(r1,c2), dtype=np.int64)
    for i in range(r1):
        for j in range(c2):
            for k in range(c1):
                temp[i][j] += m1[i][k] * m2[k][j]
    return temp

def print_matrix(m, r, c):
    for i in range(r):
        for j in range(c):
            print(m[i][j], end=' ')
        print()
    print()
    

if __name__ == '__main__':
    r1, c1, r2, c2 = 0, 0, 1, 0
    while c1 != r2:
        print('Column of matrix A needs to be equal to rows and Matrix B')
        r1 = int(input('Enter the row of matrix A: '))
        c1 = int(input('Enter the column of matrix A: '))
        r2 = int(input('Enter the row of matrix B: '))
        c2 = int(input('Enter the column of matrix B: '))

    A = np.zeros(shape=(r1,c1), dtype=np.int64)
    B = np.zeros(shape=(r2,c2), dtype=np.int64)

    input_matrix(A, r1, c1)
    print('Matrix A:')
    print_matrix(A, r1, c1)

    input_matrix(B, r2, c2)
    print('Matrix B:')
    print_matrix(B, r2, c2)

    C = multiply(A, B, r1, c1, c2)
    print('Multiplication Result: ')
    print_matrix(C, r1, c2)
    