import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        Inversions.input(arr, size);
        sc.close();
        Inversions.printArray(arr, size);
        System.out.println("Counting...");
        System.out.println("Number of Inversions: " + Inversions.countInversions(arr, 0, size-1));
    }    
}
