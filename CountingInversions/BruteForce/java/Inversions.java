import java.util.Scanner;

public class Inversions {
    private int[] arr;
    private int size;

    public Inversions(int N) {
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

    public int count() {
        int  count = 0;
        for(int i=0; i<this.size; i++)
            for(int j=i+1; j<this.size; j++)
                if(this.arr[i] > this.arr[j])
                    count++;
        return count;
    }

    public void printArray() {
        System.out.print("The array is: ");
        for(int i=0; i<this.size; i++)
            System.out.print(this.arr[i] + " ");
        System.out.println();
    }
}