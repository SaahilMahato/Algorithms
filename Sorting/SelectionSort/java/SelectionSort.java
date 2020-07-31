import java.util.Scanner;

public class SelectionSort {
    private int[] arr;
    private int size;

    public SelectionSort(int N) {
        this.size = N;
        this.arr = new int[this.size];
    }

    public void input() {
        System.out.println("Enter the array:");
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<this.size; i++)
            this.arr[i] = sc.nextInt();
        sc.close();
    }

    public void sort() {
        int min_index, temp;
        for(int i=0; i<this.size-1; i++) {
            min_index = i;
            for(int j=i+1; j<this.size; j++)
                if(this.arr[j]<this.arr[min_index])
                    min_index = j;
            temp = this.arr[i];
            this.arr[i] = this.arr[min_index];
            this.arr[min_index] = temp;
        }
    }

    public void printArray() {
        System.out.print("Array is: ");
        for(int i=0; i<this.size; i++) 
            System.out.print(this.arr[i]+" ");
        System.out.println();
    }
}
