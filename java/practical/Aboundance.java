import java.util.Scanner;
public class Aboundance {

    static void check(int num1,int num2){
        int sum1=0,sum2=0;
        for(int i=1;i<=num1/2;i++){
            if(num1%i==0) sum1+=i;
        }
        for(int i=1;i<=num2/2;i++){
            if(num2%i==0) sum2+=i;
        }
        if(num1==sum1 && num2==sum2) System.out.println("aboundance num");
        else System.out.println("no aboundance ");
        return ;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int num1=sc.nextInt();
        int num2=sc.nextInt();
        check(num1,num2);
    }
}
