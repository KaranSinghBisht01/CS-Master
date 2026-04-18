#include<iostream>
using namespace std;
int main(){
    string s="abcdabcfc";
    int ascii[10000]={0};
    for(int i=0;i<s.size();i++){
        int x=(int)s[i];
        ascii[x]++;
    }
    int q=9;
    while(q--){
        char ch;
        cin>>ch;
        int x=(int)ch;
        cout<<ascii[x]<<" ";
    }
    return 0;
}