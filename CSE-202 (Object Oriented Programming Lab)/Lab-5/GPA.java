import java.util.*;

// Written by: Md. Maruf Sarker
// Problem: 
/* 6. Write a Java Program that will perform the followings:

    a. Create an exception class named AgeOutOfRangeException extended from the class Exception. This class should contain a constructor which takes the user’s age (ex. 40) as a parameter. Will print the following message when called, "You are older than the requested age (25 years), you are 40!!!”.
    b. Create an exception class named LowGpaException extended from the class Exception. This class should contain a constructor, with no parameter. Will print this message when called "Your GPA is not sufficient to apply for this job (2.5)".
    c. Create a main class named GPA to prompt the user to enter his/her age and his GPA. The user’s application for a job will be rejected either if his age is greater than 25 years or his GPA is less than 2.5. You should declare two try-throw-catch blocks; one to handle the AgeOutOfRangeException and the other to handle the LowGpaException. If the user enters acceptable age and GPA, display the message "Your application is accepted and is under study".
 */
// Language: Java
// Date: 2023-05-19
// Difficulty Rating: 

class AgeOutOfRangeException extends Exception {
    AgeOutOfRangeException(int age) {
        System.out.println("You are older than the requested age (25 years), you are " + age + "!!!");
    }
}

class LowGpaException extends Exception {
    LowGpaException() {
        System.out.println("Your GPA is not sufficient to apply for this job (2.5)");
    }
}

public class GPA {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter your age: ");
        int age = sc.nextInt();
        System.out.print("Enter your GPA: ");
        double gpa = sc.nextDouble();

        sc.close();

        try {
            if (age > 25) {
                throw new AgeOutOfRangeException(age);
            }
            if (gpa < 2.5) {
                throw new LowGpaException();
            }
            System.out.println("Your application is accepted and is under study");
        } catch (AgeOutOfRangeException err) {
            System.out.println("Your application is rejected");
        } catch (LowGpaException err) {
            System.out.println("Your application is rejected");
        }
    }
}