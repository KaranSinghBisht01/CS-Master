#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int maxcount=1;
    char ch;
    // char ch=s[0];
    // for(int i=0;i<s.size();i++){
    //     int count=0;
    //     for(int j=0;j<s.size();j++){
    //         if(s[i]==s[j]) count++;
    //     }
    //     if(maxcount<count){
    //         ch=s[i];
    //         //cout<<s[i];
    //         maxcount=count;
    //     }
    // }
    // cout<<"frequency of "<<ch<<" is "<<" "<<maxcount;
    vector<int> ascii(26);
    for(int i=0;i<s.size();i++){
        int asc=int(s[i]);
       // int posi=i+97;
        //ascii[abs((int(s[i]))-(i+97))]++;
        ascii[asc-97]++;
    }
    for(int i=0;i<s.size();i++){
       if(ascii[i]>maxcount){
        maxcount=ascii[i];
        //ch=s[i];
        //cout<<s[i];
       }
    }
    for(int i=0;i<26;i++){
        if(ascii[i]==maxcount){
            int asc=i+97;
            char ch=char(asc);
            cout<<maxcount<<","<<ch;
        }
    }
    //cout<<ch<<" "<<maxcount;
}