#include<iostream>
using namespace std;
bool check(int mid,int arr[],int days,int n){
    int m=mid;
    int count=1;
    for(int i=0;i<n;i++){
        if(m>=arr[i]) m-=arr[i];
        else {
            count++;
            m=mid;
            m-=arr[i];
        }
    }
    if(count>days) return false;
    else true;
}
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int days;
    cout<<"enter days ";
    cin>>days;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int capacity;
    int low=arr[0];
    int sum=0;
    for(int i=0;i<n;i++){
        if(low<arr[i]) low=arr[i];
        sum+=arr[i];
    }
    int high=sum;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,arr,days,n)==true){
            capacity=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<capacity;
    return 0;
}