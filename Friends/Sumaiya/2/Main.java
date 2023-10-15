/*
Create a main class named GPA to prompt the user to enter his/herage and his GPA. The user application for a job will be rejected either if his age is greater than 25 years or his GPA is less than 2.5. You should declare two try-throw-catch blocks; one to handle the AgeOutOfRangeException and the other to handle the LowGpaException. If the user enters acceptable age and GPA, display the massage "Your application is accepted and is under study".
*/

import java.util.Scanner;

class AgeOutOfRangeException extends Exception {
    public AgeOutOfRangeException() {
        super("Age is greater than 25 years");
    }
}

class LowGpaException extends Exception {
    public LowGpaException() {
        super("GPA is less than 2.5");
    }
}

public class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int age;
        double gpa;
        try {
            System.out.print("Enter your age: ");
            age = input.nextInt();
            if (age > 25) {
                throw new AgeOutOfRangeException();
            }
            System.out.print("Enter your GPA: ");
            gpa = input.nextDouble();
            if (gpa < 2.5) {
                throw new LowGpaException();
            }
            System.out.println("Your application is accepted and is under study");
        } catch (AgeOutOfRangeException e) {
            System.out.println(e.getMessage());
        } catch (LowGpaException e) {
            System.out.println(e.getMessage());
        }
    }
}