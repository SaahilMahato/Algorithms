#include "Multiplication.hpp"

int main() {
    int r1, c1=0, r2=1, c2;
    int **A, **B, **C;

    while(c1 != r2) {
        std::cout << "Column of Matrix A needs to be equal to row of matrix B" << std::endl;
        std::cout << "Enter the row of matrix A: ";
        std::cin >> r1;
        std::cout << "Enter the column of matrix A: ";
        std::cin >> c1;
        std::cout << "Enter the row of matrix B: ";
        std::cin >> r2;
        std::cout << "Enter the column of matrix B: ";
        std::cin >> c2;
    }

    A = initializeMatrix(r1, c1);
    B = initializeMatrix(r2, c2);

    input(A, r1, c1);
    std::cout << "Matrix A: " << std::endl;
    printMatrix(A, r1, c1);

    input(B, r2, c2);
    std::cout << "Matrix B: " << std::endl;
    printMatrix(B, r2, c2);

    C = multiply(A, B, r1, c1, c2);
    std::cout << "Multiplication result: " << std::endl;
    printMatrix(C, r1, c2);

    for(int i=0; i<r1; i++)
        delete[] A[i];
    delete[] A;

    for(int i=0; i<r2; i++)
        delete[] B[i];
    delete[] B;

    for(int i=0; i<r1; i++)
        delete[] C[i];
    delete[] C;

    EXIT_SUCCESS;
}