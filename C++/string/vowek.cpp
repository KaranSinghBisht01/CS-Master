#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0,i=0;
    while(s[i]!='\0'){
        if((s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u') || 
        (s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')){
            count++;
        }
        i++;
    }
    cout<<count;
}