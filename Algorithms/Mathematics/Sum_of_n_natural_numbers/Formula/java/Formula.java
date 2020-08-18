import java.util.Scanner;

public class Formula {
    public static long sumNNumbers(int n) {
        return n*(n+1)/2;
    }

    public static void main(String[] args) {
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println("The sum of " + n + " natural numbers is: " + sumNNumbers(n));
    }
}
