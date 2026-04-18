import java.util.Scanner;
public class Javaopps {
    // user define datatype 
    public static class student{
        String name;
        private int rn;
        double per;
    }

    public static void fun(student x){ // passing clases into methods 
        System.out.println(x.name);
    }

    abstract public static class animal{ // abstract class 
        abstract void sound(); // abstract function 
        String type="animal";
        animal(){
            System.out.println("animal class ");
        }
        void method_overriding(){
            System.out.println("method overriding ");
        }
    }

    public static class dog extends animal{
        dog(){
            super(); // accessing the constructor 
            System.out.println("this is dog class ");
        }
        void sound(){
            System.out.println("bark");
        }
        void sound(String x){
            System.out.println("method overloading animal ");
        }
        void printtype(){
            System.out.println("this is " + super.type); // accessing the member 
        }
        void method_overriding(){
            System.out.println("method overrding dog ");
        }   
    }

    public interface vehicle{
        void start();
        void stop();
    }

    class car implements vehicle{
        public void start(){
            System.out.println("car started ");
        }
        public void stop(){
            System.out.println("car stopped ");
        }
    }

    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        student s=new student();
        // s.name=sc.next();
        // s.rn=sc.nextInt();
        // s.per=sc.nextDouble();
        // System.out.println(s.name);
        // fun(s);
        // System.out.println(s.rn);
        dog jackey = new dog();
        jackey.printtype();
        jackey.sound();
        jackey.sound("blabla");
        jackey.method_overriding();

        Javaopps obj=new Javaopps();
        vehicle x=obj.new car();
        x.start();
        x.stop();

    }
}
