import java.util.Scanner;

public class Multiplication {

    public static void input(int[][] M, int r, int c) {
        System.out.println("Enter Matrix: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<r; i++)
            for(int j=0; j<c; j++)
                M[i][j] = in.nextInt();
        System.out.println();
    }

    public static int[][] multiply(int[][] M1, int[][] M2, int r1, int c1, int c2) {
        int[][] temp = new int[r1][c2];
        for(int i=0; i<r1; i++)
            for(int j=0; j<c2; j++)
                for(int k=0; k<c1; k++)
                    temp[i][j] += M1[i][k] * M2[k][j];
        return temp;
    }

    public static void printMatrix(int[][] M, int r, int c) {
        for(int i=0; i<r; i++) {
            for(int j=0; j<c; j++) 
                System.out.print(M[i][j] + " ");
            System.out.println();
        }
        System.out.println();
    }
}
