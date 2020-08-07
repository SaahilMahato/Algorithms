import java.util.Scanner;

public class SelectionSort {

    public static void input(int[] arr, int size) {
        System.out.println("Enter the array:");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        in.close();
    }

    public static void selectionSort(int[] arr, int size) {
        int min_index, temp;
        for(int i=0; i<size-1; i++) {
            min_index = i;
            for(int j=i+1; j<size; j++)
                if(arr[j]<arr[min_index])
                    min_index = j;
            temp = arr[i];
            arr[i] = arr[min_index];
            arr[min_index] = temp;
        }
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++) 
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}
