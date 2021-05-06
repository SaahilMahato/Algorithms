import java.util.Scanner;

public class HeapSort {

    public static void maxHeapify(int[] arr, int n, int i) {
        int l = 2 * i + 1;
        int r = 2 * i + 2;
        int largest;
        if (l < n && arr[i] < arr[l])
            largest = l;
        else
            largest = i;
        if (r < n && arr[largest] < arr[r])
            largest = r;
        if (largest != i) {
            int temp;
            temp = arr[i];
            arr[i] = arr[largest];
            arr[largest] = temp;
            maxHeapify(arr, n, largest);
        }
    }

    public static void heapSort(int[] arr, int n) {
        for(int i=n/2-1; i>-1; i--)
            maxHeapify(arr, n, i);
        int temp;
        for(int i=n-1; i>0; i--) {
            temp = arr[i];
            arr[i] = arr[0];
            arr[0] = temp;
            maxHeapify(arr, i, 0);
        }
    }

    public static void input(int arr[], int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++) {
            arr[i] = in.nextInt();
        }
        in.close();
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }
}