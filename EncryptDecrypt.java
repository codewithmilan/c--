import java.util.Scanner;

public class EncryptDecrypt {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // Input for the code
        System.out.print("Enter your code: ");
        String s = scanner.nextLine();

        // Input for the shift value
        System.out.print("Enter shift (that you want to shift the character): ");
        int shift = scanner.nextInt();

        // Encrypting the code
        StringBuilder encrypted = new StringBuilder();
        for (int i = 0; i < s.length(); i++) {
            encrypted.append((char) (s.charAt(i) + shift));
        }

        System.out.println("Your Encrypted code: " + encrypted);

        // Decrypting the code
        StringBuilder decrypted = new StringBuilder();
        for (int i = 0; i < encrypted.length(); i++) {
            decrypted.append((char) (encrypted.charAt(i) - shift));
        }

        System.out.println("Your Decrypted code: " + decrypted);
        
        scanner.close();
    }
}
