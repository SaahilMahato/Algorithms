import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        System.out.print("Enter the size of the array: ");
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        Inversions i = new Inversions(N);
        i.input();
        sc.close();
        i.printArray();
        System.out.println("Number of inversions: " + i.count());
    }
}
