#include "Strassen.hpp"

int main() {
    std::cout << "Strassen's Matrix Multiplication Algorithm\n" <<
    "only works on square matrices whose dimension is a power of 2.\n" <<
    "So, please enter a valid dimension(size) of matrix." << std::endl;
    std::cout << "Enter size of the matrix: ";
    int n;
    std::cin >> n;

    int** A = initializeMatrix(n);
    int** B = initializeMatrix(n);
    input(A, n);
    std::cout << "Matrix A:" << std::endl;
    printMatrix(A,n);
    input(B, n);
    std::cout << "Matrix B:" << std::endl;
    printMatrix(B, n);

    int** C = initializeMatrix(n);
    C = strassenMultiply(A, B, n);
    std::cout << "Multipliction result:" << std::endl;
    printMatrix(C, n);

    delete[] A;
    delete[] B;
    delete[] C;

    return 0;
}