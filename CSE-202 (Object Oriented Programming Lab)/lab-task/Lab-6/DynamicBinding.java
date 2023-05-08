class Shape{
    int x;
    int y;

    Shape(int x, int y){
        this.x = x;
        this.y = y;
    }
}

class Triangle extends Shape{
    void display(){
        System.out.println("Triangle Area = " + .5 * x * y);
    }
}

class Rectangle extends Shape{
    void display(){
        System.out.println("Rectangle Area = " + x * y);
    }
}

public class DynamicBinding {
    public static void main(String[] args) {
        Shape[] s;
        s[0] = new Triangle();
        s[1] = new Rectangle();

        for(int i = 0; i < 2; i++) s[i].display();
    }
}