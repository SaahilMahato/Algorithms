import java.util.Scanner;

public class QuickSort {
    private int[] arr;
    private int size;

    public QuickSort(int N) {
        this.size = N;
        this.arr = new int[this.size];
    }

    public void input() {
        System.out.println("Enter the array: ");
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<this.size; i++)
            this.arr[i] = sc.nextInt();
        sc.close();
    }

    public int partition(int start, int end)
    {
        int pivot = this.arr[end];
        int p_index = start;
        for(int i=start; i<end; i++) {
            if(this.arr[i] <= pivot) {
                int temp = this.arr[i];
                this.arr[i] = this.arr[p_index];
                this.arr[p_index] = temp;
                p_index++;
            }
        }
        int temp = this.arr[p_index];
        this.arr[p_index] = this.arr[end];
        this.arr[end] = temp;
        return p_index;
    }

    public void quickSort(int start, int end) {
        if(start < end) {
            int p_index = partition(start, end);
            quickSort(start, p_index-1);
            quickSort(p_index+1, end);
        }
    }

    public void sort() {
        quickSort(0, this.size-1);
    }

    public void printArray() {
        System.out.print("Array is: ");
        for(int i=0; i<this.size; i++)
            System.out.print(this.arr[i] + " ");
        System.out.println();
    }
}