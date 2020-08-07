import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter x: ");
        long x = sc.nextLong();
        System.out.print("Enter y: ");
        long y = sc.nextLong();
        sc.close();
        System.out.println(Karatsuba.multiply(x, y));
    }
}
