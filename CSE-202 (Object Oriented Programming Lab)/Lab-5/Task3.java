import java.util.*;

// Written by: Md. Maruf Sarker
// Platform: Linux Mint
// Problem: Write a Java program that initializes a string variable and tries to print character at out of index of a string variable . Handle the index out of bounds  exception and display an appropriate error message.
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

public class Task3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str = "Hello World!";

        try{
            System.out.println("Character at index 20: " + str.charAt(20));
        } catch (IndexOutOfBoundsException err) {
            System.out.println("Error: " + err.getMessage());
        }
        
        sc.close();
    }
}