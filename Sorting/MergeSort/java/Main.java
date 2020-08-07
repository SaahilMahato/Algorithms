import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();
        int[] arr = new int[size];
        MergeSort.input(arr, size);
        sc.close();
        MergeSort.printArray(arr, size);
        System.out.println("Sorting...");
        MergeSort.mergeSort(arr, 0, size-1);
        MergeSort.printArray(arr, size);
    }    
}