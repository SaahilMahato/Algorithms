import java.util.Scanner;

public class Factorial {
    public static long factorial(int n) {
        long fact = 1;
        if(n > 1)
            for(int i=2; i<=n; i++)
                fact *= i;
        return fact;
    }

    public static void main(String[] args) {
        System.out.print("Enter the number: ");
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.close();
        System.out.println("Factorial of " + n + " is: " + factorial(n));
    }
}
