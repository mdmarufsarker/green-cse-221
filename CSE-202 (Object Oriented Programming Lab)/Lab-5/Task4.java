import java.util.*;

// Written by: Md. Maruf Sarker
// Platform: Linux Mint
// Problem: Write a Java program that initializes an array of integers and tries to access an element at an invalid index. Handle the array index out of bounds exception and display an appropriate error message.
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

public class Task4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int[] arr = {1, 2, 3, 4, 5};

        System.out.print("Enter index: ");
        int index = sc.nextInt();

        try {
            System.out.println("Value at index " + index + " is " + arr[index]);
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.println("Invalid index");
        }
        
        sc.close();
    }
}