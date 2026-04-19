#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(a==0) return b;
    else return gcd(b%a,a);
}
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        int temp=a;
        a=b;
        b=temp;
    }
    cout<<gcd(a,b);
}