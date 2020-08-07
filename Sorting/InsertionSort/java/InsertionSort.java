import java.util.Scanner;

public class InsertionSort {

    public static void input(int arr[], int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++) {
            arr[i] = in.nextInt();
        }
        in.close();
    }

    public static void insertionSort(int arr[], int size) {
        int temp, empty_index;
        for(int i=1; i<size; i++) {
            temp = arr[i];
            empty_index = i;
            while(empty_index > 0 && arr[empty_index-1] > temp) {
                arr[empty_index] = arr[empty_index-1];
                empty_index --;
            }
            arr[empty_index] = temp;
        }
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}