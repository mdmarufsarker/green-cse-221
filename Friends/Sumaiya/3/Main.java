/*
Add addition, division and subtraction to the existing code. So that you have a basic calculator having +, -, /, * operations.
*/

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter first number: ");
        int a = sc.nextInt();
        System.out.print("Enter second number: ");
        int b = sc.nextInt();
        System.out.print("Enter operation: ");
        char op = sc.next().charAt(0);
        int result = 0;
        switch (op) {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '/':
                try{
                    result = a / b;
                } catch (ArithmeticException e) {
                    System.out.println("Division by zero is not allowed");
                    System.exit(0);
                }
                break;
            case '*':
                result = a * b;
                break;
            default:
                System.out.println("Invalid operation");
                System.exit(0);
        }
        System.out.println("Result: " + result);
    }
}
