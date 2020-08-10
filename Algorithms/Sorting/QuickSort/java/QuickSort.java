import java.util.Scanner;

public class QuickSort {

    public static void input(int[] arr, int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        in.close();
    }

    public static int partition(int[] arr, int start, int end) {
        int pivot = arr[end];
        int p_index = start;
        int temp;
        for(int i=start; i<end; i++) {
            if(arr[i] <= pivot) {
                temp = arr[i];
                arr[i] = arr[p_index];
                arr[p_index] = temp;
                p_index++;
            }
        }
        temp = arr[p_index];
        arr[p_index] = arr[end];
        arr[end] = temp;
        return p_index;
    }

    public static void quickSort(int[] arr, int start, int end) {
        if(start < end) {
            int p_index = partition(arr, start, end);
            quickSort(arr, start, p_index-1);
            quickSort(arr, p_index+1, end);
        }
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}
