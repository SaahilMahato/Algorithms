import java.util.Scanner;

class Inversions {
    public static void input(int arr[], int size) {
        System.out.println("Enter the array: ");
        Scanner in = new Scanner(System.in);
        for(int i=0; i<size; i++)
            arr[i] = in.nextInt();
        in.close();
    }

    public static int count(int[] arr, int size) {
        int  count = 0;
        for(int i=0; i<size; i++)
            for(int j=i+1; j<size; j++)
                if(arr[i] > arr[j])
                    count++;
        return count;
    }

    public static void printArray(int[] arr, int size) {
        System.out.print("The array is: ");
        for(int i=0; i<size; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }
}