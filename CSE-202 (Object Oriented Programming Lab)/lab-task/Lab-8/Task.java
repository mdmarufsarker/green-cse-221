import java.util.Scanner;

public class Task {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("How many time you wanna run this program?");
        int n = sc.nextInt();
        while(n-- > 0){
            try{
                double x, y, ans;
                System.out.print("Enter 1st number: ");
                x = sc.nextDouble();
                System.out.print("Enter 2nd number: ");
                y = sc.nextDouble();
                ans = x / y;
                System.out.println(ans);
            }catch(ArithmeticException err){
                System.out.println("Entered number is not divided by 0" + err);
            }catch(Exception err){
                System.out.println("String input not allowed. Enter any number" + err);
            }
        }

        sc.close();
    }
}