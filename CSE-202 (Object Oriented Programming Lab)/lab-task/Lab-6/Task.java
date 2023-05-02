abstract class Shape{
    String name;

    abstract void draw();
    abstract void area();
    abstract void perimeter();
}

class Rectangle extends Shape{
    int length, witdh;
    Rectangle(int length, int witdh){
        this.length = length;
        this.witdh = witdh;
    }
    
    @Override
    void draw(){
        System.out.println("Rectangle");
    }
    
    @Override
    void area(){
        System.out.println(length * witdh);
    }
    
    @Override
    void perimeter(){
        System.out.println(2 * (length + witdh));
    }
}
class Circle extends Shape{
    int r;

    Circle(int r){
        this.r = r;
    }
    
    @Override
    void draw(){
        System.out.println("Circle");
    }
    
    @Override
    void area(){
        System.out.print(3.1416 * r * r);
    }
    
    @Override
    void perimeter(){
        System.out.println(2 * 3.1416 * r);
    }
}

public class Task {
    public static void main(String[] args) {
        Shape s = new Rectangle(2, 3);
        s.draw();
        s.area();
        s.perimeter();

        s = new Circle(2);
        s.draw();
        s.area();
        s.perimeter();
    }
}