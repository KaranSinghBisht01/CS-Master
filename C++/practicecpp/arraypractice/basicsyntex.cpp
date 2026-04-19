// #include<iostream>
// using namespace std;
// int main (){
//     cout<<"jai shree ram "<<endl;
//     cout<<"har har mahadev"<<endl <<"jai shri krshna ";
//     return 0;
// }
// // #include<iostream>
// using namespace std;
// int main(){
//     for(int i=1;i<=5;i++){
//         cout<<"jai shree ram"<<endl;
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
// int a=10;
// int b=2;
// int c=a%b;
// cout<<c<<endl;
// return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a num : ";
//     cin>>n;
//     cout<<n;

// }
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     if (n%2==0){
//         cout<<"even";
//     }
//     else {
//         cout<<"odd";
//     }
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     if (n<0){
//         n=n*(-1);
//     }
//     cout<<n;
//     return 0;
// }

// ***************************************switch cases***************************************

// #include<iostream>
// using namespace std;
// int main (){
//     int casee;
//     cin>>casee;
//     switch(casee){
//         case  // value of casee : ;
//         // task what we want to perform..
//     }
// }

// #include<iostream>
// using namespace std;
// int main (){
//     int a,b;
//     cout<<"enter two no";
//     cin>>a>>b;
//     int choice;
//     cout<<"press 1 for addition\n"<<"press 2 for substraction\n"<<"press 3 for multiplication\n";
//     cout<<"press 4 for division\n";
//     cout<<"enter your choice ";
//     cin>>choice;
//     switch(choice){
//         case 1:
//         cout<<a+b;
//         break;
//         case 2:
//         cout<<a-b;
//         break;
//         case 3:
//         cout<<a*b;
//         break;
//         case 4:
//         cout<<(float)a/b;
//         break;
//         default :
//         cout<<"invalid number ";
//         break;
//     }
//     return 0;
// }

// *********************************************FOR LOOP************************************************

//for(insert value ; condition ; increment/decrement){
    // code 
//}

//*******************************************WHILE LOOP********************************************

// while(condition){
    // code 
//}

// *******************************************DO WHILE LOOP***************************************

// do{
// // code 
// }while(condition);

// FIBONACCI SERIES 

// #include<iostream>
// using namespace std;
// int main (){
//     int a=1,b=1,sum=0;
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     for(int i=1;i<=n-2;i++){
//         sum=a+b;
//         a=b;
//         b=sum;
//     }
//     cout<<b;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int a,b;
//     cout<<"enter a and b ";
//     cin>>a>>b;
//     int ans=1;
//     for(int i=1;i<=b;i++){
//        ans= ans*a;
//     }
//     cout<< a<< "raised to the power"<<b << "is\n"<<ans;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     int count=0;
//     while(n!=0){
//         count++;
//         n=n/10;
//     }
//     cout<<count;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a number ";
//     cin>>n;
//     int sum=0;
//     while(n!=0){
//         int ld=n%10;
//         sum =sum + ld;
//         n=n/10;
//     }
//     cout<<sum;
//     return 0;
// }
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter a num ";
//     cin>>n;
//     while(n!=0){
//         cout<<n%10;
//         n=n/10;
//     }
//     return 0;
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
//     cout<<"enter  a  num";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             sum=sum-i;
//         }
//         else {
//             sum=sum+i;
//         }
//     }
//     cout<<sum;
// }
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter an num";
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;
}