public class Strassen {
    
    public static int[][] strassenMultiply(int[][] A, int[][] B, int n) {
        if (n == 1) {
            int[][] C = new int[1][1];
            C[0][0] = A[0][0] * B[0][0];
            return C;
        }
        int[][] C = new int[n][n];
        int k = n/2;
    
        int[][] A11 = new int[k][k];
        int[][] A12 = new int[k][k];
        int[][] A21 = new int[k][k];
        int[][] A22 = new int[k][k];
        int[][] B11 = new int[k][k];
        int[][] B12 = new int[k][k];
        int[][] B21 = new int[k][k];
        int[][] B22 = new int[k][k];
    
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
    
        int[][] P1 = strassenMultiply(A11, MatrixOperations.subtract(B12, B22, k), k);
        int[][] P2 = strassenMultiply(MatrixOperations.add(A11, A12, k), B22, k);
        int[][] P3 = strassenMultiply(MatrixOperations.add(A21, A22, k), B11, k);
        int[][] P4 = strassenMultiply(A22, MatrixOperations.subtract(B21, B11, k), k);
        int[][] P5 = strassenMultiply(MatrixOperations.add(A11, A22, k), MatrixOperations.add(B11, B22, k), k);
        int[][] P6 = strassenMultiply(MatrixOperations.subtract(A12, A22, k), MatrixOperations.add(B21, B22, k), k);
        int[][] P7 = strassenMultiply(MatrixOperations.subtract(A11, A21, k), MatrixOperations.add(B11, B12, k), k);
    
        int[][] C11 = MatrixOperations.subtract(MatrixOperations.add(MatrixOperations.add(P5, P4, k), P6, k), P2, k);
        int[][] C12 = MatrixOperations.add(P1, P2, k);
        int[][] C21 = MatrixOperations.add(P3, P4, k);
        int[][] C22 = MatrixOperations.subtract(MatrixOperations.subtract(MatrixOperations.add(P5, P1, k), P3, k), P7, k);
    
        for(int i=0; i<k; i++)
            for(int j=0; j<k; j++) {
                C[i][j] = C11[i][j];
                C[i][j+k] = C12[i][j];
                C[k+i][j] = C21[i][j];
                C[k+i][k+j] = C22[i][j];
            }
    
        return C;
    }
}