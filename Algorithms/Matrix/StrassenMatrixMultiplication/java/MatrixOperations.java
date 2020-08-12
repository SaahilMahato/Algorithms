import java.util.Scanner;

public class MatrixOperations {

    public static void input(int[][] M, int n) {
        System.out.println("Enter Matrix: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                M[i][j] = in.nextInt();
        System.out.println();
    }

    public static void printMatrix(int[][] M, int n) {
        for(int i=0; i<n; i++) {
            for(int j=0; j<n; j++) 
                System.out.print(M[i][j] + " ");
            System.out.println();
        }
        System.out.println();
    }

    public static int[][] add(int[][] M1, int[][] M2, int n) {
        int[][] temp = new int[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                temp[i][j] = M1[i][j] + M2[i][j];
        return temp;
    }
    
    public static int[][] subtract(int[][] M1, int[][] M2, int n) {
        int[][] temp = new int[n][n];
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
                temp[i][j] = M1[i][j] - M2[i][j];
        return temp;
    }
}