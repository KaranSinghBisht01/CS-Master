#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n,a,b;
    printf("enter the size of an array ");
    cin>>n;
    printf("enter the range (indexes) ");
    cin>>a>>b;
    vector<int> arr(n);
    vector<int> pre(n);
    for(int i=0;i<n;i++){
        cout<<i;
    }
    // pre[0]=arr[0];
    // for(int i=1;i<n;i++){
    //     pre[i]=arr[i]+pre[i-1];
    // } 
    // // for(int i=0;i<n;i++){
    // //     cout<<pre[i]<<" ";
    // // }
    // cout<<"sum between a and b is "<<pre[b]-pre[a-1];
}