// Write a Java program to create a vehicle class hierarchy. The base class should be Vehicle, with subclasses Truck, Car and Motorcycle. Each subclass should have properties such as make, model, year, and fuel type. Implement methods for calculating fuel efficiency, distance traveled, and maximum speed.

class Vehicle{
    String make;
    String model;
    int year;
    String fuelType;
    double fuelEfficiency;
    double distanceTraveled;
    double maxSpeed;

    public Vehicle(String make, String model, int year, String fuelType, double fuelEfficiency, double distanceTraveled, double maxSpeed){
        this.make = make;
        this.model = model;
        this.year = year;
        this.fuelType = fuelType;
        this.fuelEfficiency = fuelEfficiency;
        this.distanceTraveled = distanceTraveled;
        this.maxSpeed = maxSpeed;
    }

    public double calculateFuelEfficiency(){
        return this.fuelEfficiency;
    }

    public double calculateDistanceTraveled(){
        return this.distanceTraveled;
    }

    public double calculateMaxSpeed(){
        return this.maxSpeed;
    }
}

class Truck extends Vehicle{
    public Truck(String make, String model, int year, String fuelType, double fuelEfficiency, double distanceTraveled, double maxSpeed){
        super(make, model, year, fuelType, fuelEfficiency, distanceTraveled, maxSpeed);
    }
}

class Car extends Vehicle{
    public Car(String make, String model, int year, String fuelType, double fuelEfficiency, double distanceTraveled, double maxSpeed){
        super(make, model, year, fuelType, fuelEfficiency, distanceTraveled, maxSpeed);
    }
}

class Motorcycle extends Vehicle{
    public Motorcycle(String make, String model, int year, String fuelType, double fuelEfficiency, double distanceTraveled, double maxSpeed){
        super(make, model, year, fuelType, fuelEfficiency, distanceTraveled, maxSpeed);
    }
}

public class One{
    public static void main(String[] args){
        Truck truck = new Truck("Ford", "F-150", 2018, "Gasoline", 20.0, 0.0, 120.0);
        Car car = new Car("Toyota", "Camry", 2018, "Gasoline", 30.0, 0.0, 100.0);
        Motorcycle motorcycle = new Motorcycle("Honda", "CBR1000RR", 2018, "Gasoline", 40.0, 0.0, 150.0);

        System.out.println("Truck fuel efficiency: " + truck.calculateFuelEfficiency());
        System.out.println("Car fuel efficiency: " + car.calculateFuelEfficiency());
        System.out.println("Motorcycle fuel efficiency: " + motorcycle.calculateFuelEfficiency());
        System.out.println();
        System.out.println("Truck distance traveled: " + truck.calculateDistanceTraveled());
        System.out.println("Car distance traveled: " + car.calculateDistanceTraveled());
        System.out.println("Motorcycle distance traveled: " + motorcycle.calculateDistanceTraveled());
        System.out.println();
        System.out.println("Truck max speed: " + truck.calculateMaxSpeed());
        System.out.println("Car max speed: " + car.calculateMaxSpeed());
        System.out.println("Motorcycle max speed: " + motorcycle.calculateMaxSpeed());
    }
}