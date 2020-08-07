import java.util.Scanner;

public class BubbleSort {

    public static void input(int[] arr, int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        in.close();
    }

    public static void bubbleSort(int arr[], int size) {
        boolean flag;
        int temp;
        for(int i=1; i<size; i++) {
            flag = true;
            for(int j=0; j<size-i; j++) {
                if(arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                    flag = false;
                }
            }
            if(flag) break;
        }
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("Array is: ");
        for(int i=0; i<size; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

}