import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int N = sc.nextInt();
        MergeSort s = new MergeSort(N);
        s.input();
        sc.close();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }    
}