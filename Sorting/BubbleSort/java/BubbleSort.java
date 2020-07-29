import java.util.Scanner;

public class BubbleSort {
    private int[] arr;
    private int size;

    public BubbleSort(int N) {
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

    public void sort() {
        for(int i=1; i<this.size-1; i++) {
            boolean flag = true;
            for(int j=0; j<this.size-i; j++) {
                if(this.arr[j] > this.arr[j+1]) {
                    int temp = this.arr[j];
                    this.arr[j] = this.arr[j+1];
                    this.arr[j+1] = temp;
                    flag = false;
                }
            }
            if(flag) break;
        }
    }

    public void printArray() {
        System.out.print("Array is: ");
        for(int i=0; i<this.size; i++)
            System.out.print(this.arr[i] + " ");
        System.out.println();
    }
}