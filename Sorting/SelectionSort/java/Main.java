import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the size of the array: ");
        int N;
        N = sc.nextInt();
        SelectionSort s = new SelectionSort(N);
        s.input();
        sc.close();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }
}