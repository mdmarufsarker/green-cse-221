import java.util.*;

public class Basics{
    static void largeAndSmallNumber(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Large and Small Number Calculate");
        System.out.print("Enter three numbers: ");
        int x = sc.nextInt();
        int y = sc.nextInt();
        int z = sc.nextInt();

        // ternary operator
        int large = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y : z);
        System.out.println("Largest number: " + large);
        int small = (x < y) ? ((x < z) ? x : z) : ((y < z) ? y : z);
        System.out.println("Smallest number: " + small);

        sc.close();
    }
    static void leapYear(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Leap Year Calculate");
        System.out.print("Enter the year: ");
        int year = sc.nextInt();

        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
            System.out.println("Leap Year");
        else
            System.out.println("Not a Leap Year");
        sc.close();
    }
    static void primeNumber(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Prime Number Calculate");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int count = 0;

        for(int i = 1; i <= num; i++){
            if(num % i == 0)
                count++;
        }
        if(count == 2)
            System.out.println("Prime Number");
        else
            System.out.println("Not a Prime Number");
        sc.close();
    }
    static void factorial(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Factorial Calculate");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int fact = 1;

        for(int i = 1; i <= num; i++){
            fact *= i;
        }
        System.out.println(fact);
        sc.close();
    }
    static void fibonacci(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Fibonacci Series");
        System.out.print("Enter the number of terms: ");
        int num = sc.nextInt();
        int a = 0, b = 1, c = 0;

        for(int i = 1; i <= num; i++){
            System.out.print(a + " ");
            c = a + b;
            a = b;
            b = c;
        }
        sc.close();
    }
    static void armstrong(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Armstrong Number");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int temp = num;
        int sum = 0;

        while(temp != 0){
            int rem = temp % 10;
            sum += rem * rem * rem;
            temp /= 10;
        }
        if(sum == num)
            System.out.println("Armstrong Number");
        else
            System.out.println("Not an Armstrong Number");
        sc.close();
    }
    static void palindrome(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Palindrome Number");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int temp = num;
        int rev = 0;

        while(temp != 0){
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        if(rev == num)
            System.out.println("Palindrome Number");
        else
            System.out.println("Not a Palindrome Number");
        sc.close();
    }
    static void reverseNumber(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Reverse Number");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int temp = num;
        int rev = 0;

        while(temp != 0){
            int rem = temp % 10;
            rev = rev * 10 + rem;
            temp /= 10;
        }
        System.out.println(rev);
        sc.close();
    }
    static void sumOfDigits(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Sum of Digits");
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int temp = num;
        int sum = 0;

        while(temp != 0){
            int rem = temp % 10;
            sum += rem;
            temp /= 10;
        }
        System.out.println(sum);
        sc.close();
    }
    static void binarySearch(){
        Scanner sc = new Scanner(System.in);

        System.out.println("Binary Search");
        System.out.print("Enter the size of the array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter the elements of the array: ");
        for(int i = 0; i < n; i++){
            arr[i] = sc.nextInt();
        }

        // sorting the array in ascending order using bubble sort
        for(int i = 0; i < n - 1; i++){
            for(int j = 0; j < n - i - 1; j++){
                if(arr[j] > arr[j + 1]){
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        System.out.println("Enter the element to be searched: ");
        int key = sc.nextInt();

        int low = 0, high = n - 1, mid = 0;
        boolean flag = false;

        while(low <= high){
            mid = (low + high) / 2;
            if(arr[mid] == key){
                flag = true;
                break;
            }
            else if(arr[mid] < key)
                low = mid + 1;
            else
                high = mid - 1;
        }
        if(flag)
            System.out.println("Element found at index: " + mid);
        else
            System.out.println("Element not found");
        sc.close();
    }
    public static void main(String[] args) {
        largeAndSmallNumber();
        leapYear();
        primeNumber();
        factorial();
        fibonacci();
        armstrong();
        palindrome();
        reverseNumber();
        sumOfDigits();
        binarySearch();
    }
}