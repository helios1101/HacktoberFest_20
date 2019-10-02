import java.util.Scanner;

public class Spongebob {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your text to spongebobify: ");
        String input = scanner.nextLine();
        scanner.close();

        char[] spongebobText = input.toCharArray();

        for (int i = 0; i < spongebobText.length; i++) {
            if (i%2 == 0)
                System.out.print(Character.toUpperCase(spongebobText[i]));
            else
                System.out.print(Character.toLowerCase(spongebobText[i]));
        }
        System.out.println();
    }
}