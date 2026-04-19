#include<iostream>
using namespace std;
int main(){
    // char str[]={'j','a','i','s','h','r','e','e','R','A','M'};
    // int n=sizeof(str)/sizeof(str[0]);
    // for(int i=0;i<n;i++){
    //     cout<<str[i];
    // }

    // string s="karan singh bisht ";
    // cout<<s;

    string s;
    //cin>>s;// karan singh bisht --> (cin function takes input until space or newline comes ) ---> karan(output)
    getline(cin,s); 
    cout<<s;
}