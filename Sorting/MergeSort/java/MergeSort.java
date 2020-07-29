import java.util.Scanner;

public class MergeSort {
    private int[] arr;
    private int size;

    public MergeSort(int N) {
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

    public void merge(int l, int m, int h) {
        int[] temp = new int[h-l+1];
        int i=l, j=m+1, k=0;

        while(i <= m && j <= h) {
            if(this.arr[i] <= this.arr[j]) {
                temp[k] = this.arr[i];
                i++;
            }
            else {
                temp[k] = this.arr[j];
                j++;
            }
            k++;
        }

        while(i <= m) {
            temp[k] = this.arr[i];
            i++;
            k++;
        }

        while(j <= h) {
            temp[k] = this.arr[j];
            j++;
            k++;
        }

        for(int a=l; a<=h; a++)
            this.arr[a] = temp[a-l];
    }

    void mergeSort(int l, int h) {
        if(l<h) {
            int m = (l+h)/2;
            mergeSort(l, m);
            mergeSort(m+1, h);
            merge(l, m, h);
        }
    }

    void sort() {
        mergeSort(0, this.size-1);
    }

    void printArray() {
        System.out.print("Array is: ");
        for(int i=0; i<this.size; i++)
            System.out.print(this.arr[i] + " ");
        System.out.println();
    }
}