import java.util.Scanner;

public class InsertionSort {
    private int[] arr;
    private int size;

    public InsertionSort(int N) {
        this.size = N;
        this.arr = new int[this.size];
    }

    public void input() {
        System.out.println("Enter the array: ");
        Scanner sc = new Scanner(System.in);
        for(int i=0; i<this.size; i++) {
            this.arr[i] = sc.nextInt();
        }
        sc.close();
    }

    public void sort() {
        for(int i=1; i<this.size; i++) {
            int temp = this.arr[i];
            int empty_index = i;
            while(empty_index > 0 && this.arr[empty_index-1] > temp) {
                this.arr[empty_index] = this.arr[empty_index-1];
                empty_index --;
            }
            this.arr[empty_index] = temp;
        }
    }

    public void printArray(){
        System.out.print("Array is: ");
        for(int i=0; i<this.size; i++) {
            System.out.print(this.arr[i] + " ");
        }
        System.out.println();
    }
}