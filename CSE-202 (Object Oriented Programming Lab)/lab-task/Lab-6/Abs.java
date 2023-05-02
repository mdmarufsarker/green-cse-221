public class Abs {
    abstract int find(int arr[], int val){
        for(int i = 0; i < arr.length(); i++){
            if(arr[i] == target) return i;
        }
    }
    public static void main(String[] args) {
        int arr[] = new arr[5];
        arr[0] = 1;
        arr[1] = 2;
        arr[2] = 3;
        arr[3] = 4;
        arr[4] = 5;
        
        System.out.println(find(arr, 3));
    }
}