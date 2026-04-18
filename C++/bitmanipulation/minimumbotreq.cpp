#include<iostream>
using namespace std;
int main(){
    int n;
    int m;
    cin>>n>>m;
    cout<<__builtin_popcount(n^m);
    
}
