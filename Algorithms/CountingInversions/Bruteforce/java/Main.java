import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.print("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        Inversions.input(arr, size);
        sc.close();
        Inversions.printArray(arr, size);
        System.out.println("Counting...");
        System.out.println("Number of inversions: " + Inversions.count(arr, size));
    }
}
