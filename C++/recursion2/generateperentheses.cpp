#include<iostream>
using namespace std;
void parentheses(string str,int op,int cl,int n){
    if(cl==n){
        cout<<str<<endl;
        return;
    }
    char ch='(';
    char dh=')';
    if(op>cl) parentheses(str+dh,op,cl+1,n);
    if(op<n) parentheses(str+ch,op+1,cl,n);
}
int main(){
    int n;
    cout<<"enter the value of n ";
    cin>>n;
    string str="";
    parentheses(str,0,0,n);
}