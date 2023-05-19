import java.util.*;

// Written by: Md. Maruf Sarker
// Platform: Linux Mint
// Problem: Write a Java program that divides the two integers where the second integer is 0 . Handle the division by zero exception and display an appropriate error message.
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

public class Task1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter two integers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();

        try {
            System.out.println(a + " / " + b + " = " + (a / b));
        } catch (ArithmeticException err) {
            System.out.println("Error: " + err.getMessage());
        }
        
        sc.close();
    }
}