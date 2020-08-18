import java.util.Scanner;

public class Factorial {
    public static long factorial(int n) {
        long fact = n;
        if(n < 2)
            return 1;
        else
            return fact * factorial(n-1);
    }

    public static void main(String[] args) {
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println("Factorial of " + n + " is: " + factorial(n));
    }
}
