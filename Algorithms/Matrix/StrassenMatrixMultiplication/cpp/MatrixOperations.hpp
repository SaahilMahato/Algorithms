#include <iostream>

int** initializeMatrix(int n) {
    int** temp = new int*[n];
    for(int i=0; i<n; i++)
        temp[i] = new int[n];
    return temp;
}

void input(int** M, int n) {
    std::cout << "Enter matrix: " << std::endl;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            std::cin >> M[i][j];
    std::cout << std::endl;
}

void printMatrix(int** M, int n) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            std::cout << M[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl;
}

int** add(int** M1, int** M2, int n) {
    int** temp = initializeMatrix(n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            temp[i][j] = M1[i][j] + M2[i][j];
    return temp;
}

int** subtract(int** M1, int** M2, int n) {
    int** temp = initializeMatrix(n);
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            temp[i][j] = M1[i][j] - M2[i][j];
    return temp;
}