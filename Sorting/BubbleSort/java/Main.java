import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.print("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        BubbleSort s = new BubbleSort(N);
        s.input();
        sc.close();
        s.printArray();
        System.out.println("Sorting...");
        s.sort();
        s.printArray();
    }
}