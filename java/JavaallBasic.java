// import javax.sound.sampled.SourceDataLine;
// import java.util.Arrays;
// public class JavaallBasic{
//     // 1st program  
//     public static void main(String[] args){
//         System.out.println("Jai Shree Siya Ram ");

//         String s = "Jai Shree Krishna ";
//         System.out.println(s);

//         // new keyword 

//         String n = new String("Jai Shree Mahakal ");
//         n.replace('J', 'j'); // no changes will be in n string due to immutable property to make change we can store in another string 
//         System.out.println(n);
//         char x=n.charAt(5);
//         System.out.println(x);

//         // Arrays 

//         int arr[]=new int[3];
//         System.out.println(arr[0]);
//         arr[0]=23;
//         arr[1]=2;
//         arr[2]=78;
//         Arrays.sort(arr);
//         int brr[]={34,2,45};
//         System.out.println(arr[0]);
//         System.out.println(brr[2]);
//     }

// }

//java miniproject
import java.util.Scanner;
class JavaallBasic{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int mynum=(int)(Math.random()*100);
        while(true){
            int x;
            System.out.println("guess the number ");
            x=sc.nextInt();
            if(x==-1){
                System.out.print("the number is :");
                System.out.println(mynum);
                break;
            }
            if(x>mynum) System.out.println("random num is less than your guess ");
            else if(x<mynum) System.out.println("random num is grater than your guess ");
            else{
                System.out.println("correct guess ");
                break;
            }
        }
    }
}