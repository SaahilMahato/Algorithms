#include <iostream>

int** initializeMatrix(int r, int c) {
    int** temp = new int*[r];
    for(int i=0; i<r; i++)
        temp[i] = new int[c];
    return temp;
}

void setToZero(int** M, int r, int c) {
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            M[i][j] = 0;
}

void input(int** M, int r, int c) {
    std::cout << "Enter matrix: " << std::endl;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            std::cin >> M[i][j];
    std::cout << std::endl;
}

int** multiply(int** M1, int** M2, int r1, int c1, int c2) {
    int** temp = initializeMatrix(r1, c2);
    setToZero(temp, r1, c2);
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++)
            for(int k=0; k<c1; k++)
                temp[i][j] += M1[i][k] * M2[k][j];
    return temp;
}

void printMatrix(int** M, int r, int c) {
    for(int i=0; i<r; i++) {
        for(int j=0; j<c; j++)
            std::cout << M[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}
