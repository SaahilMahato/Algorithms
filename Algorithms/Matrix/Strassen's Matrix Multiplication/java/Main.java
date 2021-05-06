import java.util.Scanner;

public class Main {
    public static void main(String[] args) {

    System.out.println("Strassen's Matrix Multiplication Algorithm\n"+
    "only works on square matrices whose dimension is a power of 2.\n"+
    "So, please enter a valid dimension(size) of matrix.");
    System.out.print("Enter size of the matrix: ");
    Scanner sc = new Scanner(System.in);
    int n = sc.nextInt();

    int[][] A = new int[n][n];
    int[][] B = new int[n][n];
    MatrixOperations.input(A, n);
    System.out.println("Matrix A:");
    MatrixOperations.printMatrix(A,n);
    MatrixOperations.input(B, n);
    System.out.println("Matrix B:");
    MatrixOperations.printMatrix(B, n);
    sc.close();

    int[][] C = new int[n][n];
    C = Strassen.strassenMultiply(A, B, n);
    System.out.println("Multiplication result:");
    MatrixOperations.printMatrix(C, n);
    }
}