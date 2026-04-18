#include<iostream>
using namespace std;
int maximum_power(int x){
    int temp;
    while(x!=0){
        temp=x;
        x=x&(x-1);
    }
    return temp;
}
int main(){
    int n;
    cin>>n;
    cout<<maximum_power(n);
}