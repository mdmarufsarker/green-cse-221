// Write a Java program to create a class Employee with a method called calculateSalary(). Create two subclasses Manager and Programmer. In each subclass, override the calculateSalary() method to calculate and return the salary based on their specific roles.

class Employee{
    String name;
    String role;
    double salary;

    public Employee(String name, String role, double salary){
        this.name = name;
        this.role = role;
        this.salary = salary;
    }

    public double calculateSalary(){
        return this.salary;
    }
}

class Manager extends Employee{
    public Manager(String name, String role, double salary){
        super(name, role, salary);
    }

    public double calculateSalary(){
        return this.salary * 1.5;
    }
}

class Programmer extends Employee{
    public Programmer(String name, String role, double salary){
        super(name, role, salary);
    }

    public double calculateSalary(){
        return this.salary * 2.0;
    }
}

public class Two{
    public static void main(String[] args){
        Manager manager = new Manager("Fuad", "Manager", 100000.0);
        Programmer programmer = new Programmer("Fuad", "Programmer", 100000.0);

        System.out.println("Manager salary: " + manager.calculateSalary());
        System.out.println("Programmer salary: " + programmer.calculateSalary());
    }
}