#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    //cout<<stoi(s);4
    int n=std::stoi(s)/stoi(s);
    //cout<<n;
    cout<<std::stol(s);
}