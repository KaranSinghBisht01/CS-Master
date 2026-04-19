#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    int tsum=n*(n+1)/2;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    cout<<tsum-sum;
    return 0;
}