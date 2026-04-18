import java.util.*;
import java.util.Scanner;
public class Negative {
    public static void main(String[] args) {
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        ArrayList<Integer>arr=new ArrayList<>();
        for(int i=0;i<n;i++){
            arr.add(sc.nextInt());
        }
        ArrayList<Integer>ans=new ArrayList<>();
        for(int i=0;i<n;i++){
            if(arr.get(i)<0) ans.add(arr.get(i));
        }
        for(int i=0;i<n;i++){
            if(arr.get(i)>=0) ans.add(arr.get(i));
        }
        for(int i=0;i<n;i++){
            System.out.print(ans.get(i));
        }
    }
}
