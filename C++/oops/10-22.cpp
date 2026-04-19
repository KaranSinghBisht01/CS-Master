// /*Create a class called Invoice that a hardware store might use to represent 
// an invoice for an item sold at the store. An Invoice should include four pieces 
// of information as instance. 
// Data Members ‐ 
//  partNumber (type String) 
//  partDescription (type String) 
//  quantity of the item being purchased (type int) 
//  price_per_item (type double) 
// Your class should have a constructor that initializes the four instance 
// variables. Provide a set and a get method for each instance variable. In 
// addition, provide a method named getInvoiceAmount() that calculates the 
// invoice amount (i.e., multiplies the quantity by the price per item), then 
// returns the amount as a double value. If the quantity is not positive, it should 
// be set to 0. If the price per item is not positive,it should be set to0.0. Write a 
// test application named invoiceTest that demonstrates class Invoice’s 
// capabilities.*/

// #include<bits/stdc++.h>
// using namespace std;
// class Invoice{
//     string partnum;
//     string partdes;
//     int quantity;
//     double price;
// public:
//     Invoice(string num,string des){
//         partnum=num;
//         partdes=des;
//         quantity=0;
//         price=0.0;
//     }
//     void getquan(int q){
//         this->quantity=q;
//     }
//     void getprice(double p){
//         this->price=p;
//     }
//     double calamount(){
//         if(quantity<0) quantity=0;
//         if(price<0) price=0.0;
//         return price*quantity;
//     }

// };
// int main(){
//     Invoice c1("123","unknown");
//     c1.getprice(456);
//     c1.getquan(3);
//     double x=c1.calamount();
//     cout<<x;
// }

// /*Imagine a tollbooth with a class called TollBooth. The two data items are of 
// type unsigned int and double to hold the total number of cars and total 
// amount of money collected. A constructor initializes both of these data 
// members to 0. A member function called payingCar( )increments the car 
// total and adds 0.5 to the cash total. Another function called nonPayCar( ) 
// increments the car total but adds nothing to the cash total. Finally a member 
// function called display( )shows the two totals. Include a program to test this 
// class. This program should allow the user to push one key to count a paying 
// car and another to count a non paying car. Pushing the ESC key should 
// cause the program to print out the total number of cars and total cash and 
// then exit. */

// #include<bits/stdc++.h>
// using namespace std;
// class Toolbooth{
//     int totalcar;
//     double price;

// public:
//     Toolbooth(){
//         totalcar=0;
//         price=0.0;
//     }
//     void payingcar(){
//         totalcar+=1;
//         price+=0.5;
//     }
//     void nonpayingcar(){
//         totalcar+=1;
//     }
//     void display(){
//         cout<<"No of total car "<<totalcar<<endl<<endl<<endl;
//         cout<<"total cash "<<price<<endl<<endl<<endl;
//     }
// };
// int main(){
//     Toolbooth t1;
//     int choice;
//     while(1){
//         cout<<"press 1 for paying car "<<endl;
//         cout<<"press 2 for non paying car "<<endl;
//         cout<<"press 3 for display values "<<endl;
//         cout<<"press 4 for exist "<<endl;

//         cin>>choice;

//         switch (choice){
//             case 1:
//                 t1.payingcar();
//                 break;
//             case 2:
//                 t1.nonpayingcar();
//                 break;
//             case 3:
//                 t1.display();
//                 break;
//             case 4:
//                 exit(0);
//             default:
//                 cout<<"invalid choice ";
//                 break;
//         }
//     }
// }

// /*Create a class called Time that has separate int member data for hours, 
// minutes and seconds. One constructor should initialize this data to 0, and 
// another should initialize it to fixed values. A member function should display 
// it in 11:59:59 format. A member function named add() should add two 
// objects of type time passed as arguments. A main ( ) program should create 
// two initialized values together, leaving the result in the third time variable. 
// Finally it should display the value of this third variable.*/

// #include<bits/stdc++.h>
// class Time{
//     int hours;
//     int minute;
//     int second;
// public:
//     Time(){
//         hours=0;
//         minute=0;
//         second=0;
//     }
//     Time add(Time &t1,Time &t2){
//         Time sum;
//         sum.hours=t1.hours+t2.hours;
//         sum.minute=t1.minute+t2.minute;
//         sum.second=t1.second+t2.second;
//     }
// }
// using namespace std;
// int main(){
// int 
// }
