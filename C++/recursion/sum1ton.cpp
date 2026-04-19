#include<iostream>
using namespace std;
void sum1(int sum,int n){
    if(n==0){
        cout<<sum<<endl;
        return ;
    }
    return sum1(sum+n,n-1);
}
int main(){
    int n;
    cout<<"enter n ";
    cin>>n;
    sum1(0,n);
}

// #include<stdio.h>
// int sum1(int n){
//     int sum=0;
//     if(n==0) return sum;
//     sum= n+sum1(n-1);
// }
// int main(){
//     int n;
//     scanf("%d",&n);
//     int x=sum1(n);
//     printf("%d",x);
//     return 0;
// }