class Overload{
    int x, y, z, ans;
    Overload(int x, int y){
        this.x = x;
        this.y = y;
        this.ans = x + y;
        sumTwo();
    }
    Overload(int x, int y, int z){
        this.x = x;
        this.y = y;
        this.z = z;
        this.ans = x + y + z;
        sumThree();
    }

    void sumTwo(){
        System.out.println(ans);
    }
    void sumThree(){
        System.out.println(ans);
    }
}

public class OverLoading {
    public static void main(String[] args) {
        Overload ol1 = new Overload(2, 5);
        Overload ol2 = new Overload(2, 5, 8);
    }
}