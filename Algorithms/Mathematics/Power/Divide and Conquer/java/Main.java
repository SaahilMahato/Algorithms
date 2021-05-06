import java.util.Scanner;

public class Main {
    public static double power(float n, int p) {
        if (p == 0)
            return 1.0;
        double result = power(n, p/2);
        if (p%2 == 0)
            return result * result;
        if (p < 0)
            return result * result / n;
        return n * result * result;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        float n = sc.nextFloat();
        System.out.print("Enter the power: ");
        int p = sc.nextInt();
        sc.close();
        System.out.println(power(n, p));
    }
}