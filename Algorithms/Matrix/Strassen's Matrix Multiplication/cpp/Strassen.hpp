#include "MatrixOperations.hpp"

int** strassenMultiply(int** A, int** B, int n) {
    if (n == 1) {
        int** C = initializeMatrix(1);
        C[0][0] = A[0][0] * B[0][0];
        return C;
    }
    int** C = initializeMatrix(n);
    int k = n/2;

    int** A11 = initializeMatrix(k);
    int** A12 = initializeMatrix(k);
    int** A21 = initializeMatrix(k);
    int** A22 = initializeMatrix(k);
    int** B11 = initializeMatrix(k);
    int** B12 = initializeMatrix(k);
    int** B21 = initializeMatrix(k);
    int** B22 = initializeMatrix(k);

    for(int i=0; i<k; i++)
        for(int j=0; j<k; j++) {
            A11[i][j] = A[i][j];
            A12[i][j] = A[i][k+j];
            A21[i][j] = A[k+i][j];
            A22[i][j] = A[k+i][k+j];
            B11[i][j] = B[i][j];
            B12[i][j] = B[i][k+j];
            B21[i][j] = B[k+i][j];
            B22[i][j] = B[k+i][k+j];
        }

    int** P1 = strassenMultiply(A11, subtract(B12, B22, k), k);
    int** P2 = strassenMultiply(add(A11, A12, k), B22, k);
    int** P3 = strassenMultiply(add(A21, A22, k), B11, k);
    int** P4 = strassenMultiply(A22, subtract(B21, B11, k), k);
    int** P5 = strassenMultiply(add(A11, A22, k), add(B11, B22, k), k);
    int** P6 = strassenMultiply(subtract(A12, A22, k), add(B21, B22, k), k);
    int** P7 = strassenMultiply(subtract(A11, A21, k), add(B11, B12, k), k);

    int** C11 = subtract(add(add(P5, P4, k), P6, k), P2, k);
    int** C12 = add(P1, P2, k);
    int** C21 = add(P3, P4, k);
    int** C22 = subtract(subtract(add(P5, P1, k), P3, k), P7, k);

    for(int i=0; i<k; i++)
        for(int j=0; j<k; j++) {
            C[i][j] = C11[i][j];
            C[i][j+k] = C12[i][j];
            C[k+i][j] = C21[i][j];
            C[k+i][k+j] = C22[i][j];
        }

    for(int i=0; i<k; i++) {
        delete[] A11[i];
        delete[] A12[i];
        delete[] A21[i];
        delete[] A22[i];
        delete[] B11[i];
        delete[] B12[i];
        delete[] B21[i];
        delete[] B22[i];
        delete[] P1[i];
        delete[] P2[i];
        delete[] P3[i];
        delete[] P4[i];
        delete[] P5[i];
        delete[] P6[i];
        delete[] P7[i];
        delete[] C11[i];
        delete[] C12[i];
        delete[] C21[i];
        delete[] C22[i];
    }
        
    delete[] A11;
    delete[] A12;
    delete[] A21;
    delete[] A22;
    delete[] B11;
    delete[] B12;
    delete[] B21;
    delete[] B22;
    delete[] P1;
    delete[] P2;
    delete[] P3;
    delete[] P4;
    delete[] P5;
    delete[] P6;
    delete[] P7;
    delete[] C11;
    delete[] C12;
    delete[] C21;
    delete[] C22;

    return C;
}
