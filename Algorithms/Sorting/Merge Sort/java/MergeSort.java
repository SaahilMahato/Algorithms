import java.util.Scanner;

public class MergeSort {

    public static void input(int[] arr, int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        in.close();
    }

    public static void merge(int arr[], int start, int mid, int end) {
        int[] temp = new int[end-start+1];
        int i=start, j=mid+1, k=0;

        while(i <= mid && j <= end) {
            if(arr[i] <= arr[j]) {
                temp[k] = arr[i];
                i++;
            }
            else {
                temp[k] = arr[j];
                j++;
            }
            k++;
        }

        while(i <= mid) {
            temp[k] = arr[i];
            i++;
            k++;
        }

        while(j <= end) {
            temp[k] = arr[j];
            j++;
            k++;
        }

        for(int a=start; a<=end; a++)
            arr[a] = temp[a-start];
    }

    public static void mergeSort(int[] arr, int start, int end) {
        if(start<end) {
            int mid = (start + end) / 2;
            mergeSort(arr, start, mid);
            mergeSort(arr, mid+1, end);
            merge(arr, start, mid, end);
        }
    }

    public static void printArray(int arr[], int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}