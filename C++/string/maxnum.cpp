// find the maximum no in given string 
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int main(){ 
    int n;
    cin>>n;
    cin.ignore();
    vector<string> str(n);
    //cin>>n;
    for(int i=0;i<n;i++){
        //string s;
        getline(cin,str[i]);
    }
    int maxnum= INT_MIN;
    for(int i=0;i<str.size();i++){
        int num=stoi(str[i]);
        //maxnum=max(maxnum,num);
        if(maxnum<num) maxnum=num;
    }
    cout<<maxnum;
}