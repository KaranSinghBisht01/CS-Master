import java.util.*;
public class ZigZag {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        ArrayList<Integer> arr=new ArrayList<>();
        int n=sc.nextInt();
        System.out.println("enter elements ");
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(arr.get(i)>arr.get(i+1)){
                    Collections.swap(arr, i, i + 1);
                }
            }
            else{
                if(arr.get(i)<arr.get(i+1)){
                    Collections.swap(arr,i,i+1);
                }
            }
        }
        for(int i=0;i<n;i++){
            System.out.print(arr.get(i));
        }
    }
}
