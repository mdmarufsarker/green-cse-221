/*
Write a class Employee
Write another class Manager inherited froom Employee
Write another class Project inherited from the Manager
With Required data members, wirte two functions  in each class inputData() and printData(). For each class, these functions will input and print their attributes. Use function overriding. Create an object of class Project and demonstrate the working in a program.
*/

import java.util.Scanner;

class Employee {
    String name;
    int age;
    String address;
    int salary;

    void inputData() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter name: ");
        name = sc.nextLine();
        System.out.print("Enter age: ");
        age = sc.nextInt();
        sc.nextLine();
        System.out.print("Enter address: ");
        address = sc.nextLine();
        System.out.print("Enter salary: ");
        salary = sc.nextInt();
    }

    void printData() {
        System.out.println("Name: " + name);
        System.out.println("Age: " + age);
        System.out.println("Address: " + address);
        System.out.println("Salary: " + salary);
    }
}

class Manager extends Employee {
    String department;

    void inputData() {
        super.inputData();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter department: ");
        department = sc.nextLine();
    }

    void printData() {
        super.printData();
        System.out.println("Department: " + department);
    }
}

class Project extends Manager {
    String project;

    void inputData() {
        super.inputData();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter project: ");
        project = sc.nextLine();
    }

    void printData() {
        super.printData();
        System.out.println("Project: " + project);
    }
}

public class Main {
    public static void main(String[] args) {
        Project p = new Project();
        p.inputData();
        p.printData();
    }
}