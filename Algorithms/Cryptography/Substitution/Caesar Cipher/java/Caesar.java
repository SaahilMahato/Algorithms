import java.util.Scanner;

public class Caesar {

    public static String encrypt(String plain_text) {
        String alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String cipher_text = "";
        for (int i=0; i<plain_text.length(); ++i) {
            if (plain_text.charAt(i) == ' ')
                cipher_text += ' ';
            else
                cipher_text += alphabets.charAt((alphabets.indexOf(plain_text.charAt(i)) + 3) % 26);
        }
        return cipher_text;
    }

    public static String decrypt(String cipher_text) {
        String alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        String plain_text = "";
        for (int i=0; i<cipher_text.length(); ++i) {
            if (cipher_text.charAt(i) == ' ')
                plain_text += ' ';
            else
                plain_text += alphabets.charAt((alphabets.indexOf(cipher_text.charAt(i)) - 3) % 26);
        }
        return plain_text;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the plain text: ");
        String plain_text = sc.nextLine(); // Input only capital letters
        System.out.println("Cipher text: " + encrypt(plain_text));

        System.out.print("Enter the cipher text: ");
        String cipher_text = sc.nextLine(); // Input only capital letters
        System.out.println("Plain text: " + decrypt(cipher_text));

        sc.close();
    }
}