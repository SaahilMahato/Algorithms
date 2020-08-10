import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int arr[] = new int[size];
        InsertionSort.input(arr, size);
        sc.close();
        InsertionSort.printArray(arr, size);
        System.out.println("Sorting...");
        InsertionSort.insertionSort(arr, size);
        InsertionSort.printArray(arr, size);
    }
}