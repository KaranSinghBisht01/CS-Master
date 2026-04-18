import java.util.Scanner;
public class Replacezero{
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num=sc.nextInt();
        int result=0,place=1;
        while(num>0){
            int last=num%10;
            if(last==0){
                last=1;
            }
            result=last*place+result;
            place*=10;
            num/=10;
        }

        System.out.println(result);
    }
}