import java.util.*;

// Written by: Md. Maruf Sarker
// Platform: Linux Mint
// Problem: Write a Java program that takes a string as input and tries to parse it into an integer. Handle the number format exception and display an appropriate error message.
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

public class Task5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        try {
            int n = Integer.parseInt(s);
            System.out.println("Integer: " + n);
        } catch (NumberFormatException e) {
            System.out.println("Invalid input");
        }

        sc.close();
    }
}