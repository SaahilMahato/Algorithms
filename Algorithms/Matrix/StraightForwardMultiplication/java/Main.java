import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int r1=0, c1=0, r2=1, c2=0;
        int[][] A, B, C;

        Scanner sc = new Scanner(System.in);
        while(c1 != r2) {
            System.out.println("Column of matrix A needs to be equal to rows and Matrix B");
            System.out.print("Enter the row of matrix A: ");
            r1 = sc.nextInt();
            System.out.print("Enter the column of matrix A: ");
            c1 = sc.nextInt();
            System.out.print("Enter the row of matrix B: ");
            r2 = sc.nextInt();
            System.out.print("Enter the column of matrix B: ");
            c2 = sc.nextInt();
        }

        A = new int[r1][c1];
        B = new int[r2][c2];

        Multiplication.input(A, r1, c1);
        System.out.println("Matrix A: ");
        Multiplication.printMatrix(A, r1, c1);

        Multiplication.input(B, r2, c2);
        System.out.println("Matrix B: ");
        Multiplication.printMatrix(B, r2, c2);

        sc.close();

        C = Multiplication.multiply(A, B, r1, c1, c2);
        System.out.println("Multiplication result: ");
        Multiplication.printMatrix(C, r1, c2);
    }
}