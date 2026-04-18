import java.util.Scanner;
public class pattern{
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        String str=sc.next();
        int count=0,i=0;
        while(i<str.length()){
            if(str.charAt(i)=='0'){
                boolean found=false;
                int j=i+1;
                while(j<str.length() && str.charAt(j)=='1'){
                    j++;
                    found=true;
                }
                if(found && j<str.length() && str.charAt(j)=='0'){
                    i=j;
                    count++;
                }
            }
            i++;
        }
        System.out.println(count);
    }
}