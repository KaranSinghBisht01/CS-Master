#include<iostream>
#include<string>
using namespace std;
string decimal_to_binary(int num){
    cout<<__builtin_popcount(num)<<endl;
    string ans="";
    int count=0;
    while(num>0){
        if(num%2==0) ans="0"+ans;
        else {
            count++;
            ans="1"+ans;
        }
        num/=2; 
    }
    cout<<count<<endl;
    return ans;
}


int decimal_to_binary2(int n){
    int count=0;
    while(n>0){
        n=(n & (n-1));
        count++;
    }
    return count;
}


int main(){
    int num;
    cin>>num;
    cout<<decimal_to_binary(num)<<endl;
    cout<<decimal_to_binary2(num);

}