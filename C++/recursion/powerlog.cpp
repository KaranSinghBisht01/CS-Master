#include<iostream>
using namespace std;
int pow(int n,int x){
    if(x==1) return n;
    // return n*pow(n,x-1);
    int ans=pow(n,x/2);
    if (x%2==0) return ans*ans;
    else return ans*ans*n;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b);
    return 0;
}