import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.print("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        int size = sc.nextInt();
        int[] arr = new int[size];
        BubbleSort.input(arr, size);
        sc.close();
        BubbleSort.printArray(arr, size);
        System.out.println("Sorting...");
        BubbleSort.bubbleSort(arr, size);
        BubbleSort.printArray(arr, size);
    }
}