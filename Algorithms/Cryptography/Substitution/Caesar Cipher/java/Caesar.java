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

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the plain text: ");
        String plain_text = sc.nextLine(); // Input only capital letters
        sc.close();
        System.out.println("Cipher text: " + encrypt(plain_text));
    }
}