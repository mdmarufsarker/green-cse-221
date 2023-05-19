import java.util.*;

// Written by: Md. Maruf Sarker
// Platform: Linux Mint
// Problem: Write a Java program tries to print the character at second index of a string variable where the string variable is initialized with null value . Handle the null pointer exception and display an appropriate error message.
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

public class Task2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = null;

        try {
            System.out.println("Character at index 2: " + str.charAt(2));
        } catch (NullPointerException err) {
            System.out.println("Error: " + err.getMessage());
        }
        
        sc.close();
    }
}