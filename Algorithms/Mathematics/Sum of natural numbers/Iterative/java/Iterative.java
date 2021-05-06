import java.util.Scanner;

public class Iterative {
    public static long sumNNumbers(int n) {
        long sum = 0;
        for(int i=1; i<=n; i++)
            sum += i;
        return sum;
    }

    public static void main(String[] args) {
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println("The sum of " + n + " natural numbers is: " + sumNNumbers(n));
    }
}
