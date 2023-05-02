class rectArea{
    int x, y, area;

    rectArea(int x, int y){
        this.x = x;
        this.y = y;
        this.area = x * y;
        print();
    }

    void print(){
        System.out.println("Area = " + area);
    }
}

public class This {
    public static void main(String[] args) {
        int a = 5;
        int b = 10;

        rectArea rc = new rectArea(a, b);
    }
}