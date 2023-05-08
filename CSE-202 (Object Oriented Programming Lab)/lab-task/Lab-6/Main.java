/*
Create a Teacher class a subclass CSE_Teacher and both class contain a method show(). Your task is to call show function of 'CSE_Teacher' using reference of 'Teacher' class.
*/

class Teacher{
    String name;
    void show(){
        System.out.println("Lisan Islam");
    }
}
class CSE_Teacher extends Teacher{
    void show(){
        System.out.println("Maruf Sarker");
    }
}

public class Main {
    public static void main(String[] args) {
        Teacher t = new CSE_Teacher();
        t.show();
    }
}