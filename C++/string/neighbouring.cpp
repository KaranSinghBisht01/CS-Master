#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int count=0;
    for(int i=0;i<s.size();i++){
        if(i==0){
            if(s[i]!=s[i+1]) count++;
        }
        else if(i==s.size()-1){
            if(s[i]!=s[i-1]) count++;
        }
        else if(s[i-1]!=s[i] && s[i+1]!=s[i]){
            count++;
        }
    }
    cout<<count;
}