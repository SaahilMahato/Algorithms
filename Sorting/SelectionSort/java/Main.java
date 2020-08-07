import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        SelectionSort.input(arr, size);
        sc.close();
        SelectionSort.printArray(arr, size);
        System.out.println("Sorting...");
        SelectionSort.selectionSort(arr, size);
        SelectionSort.printArray(arr, size);
    }
}