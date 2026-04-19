#include<iostream>
using namespace std;
void reverse(int s,int size,int arr[]){
    for(int i=s,j=size;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return ;
}
bool search(int arr[],int k,int n){
    int high=n-1;
    int low=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k) return true;
        else if(arr[mid]>k) high=mid-1;
        else low=mid+1;
    }
    return false ;
}
int main(){
    int n,k;
    cout<<"enter the size ";
    cin>>n;
    cout<<"enter the value of pivot ";
    cin>>k;
    int arr[100];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(n-k-1,n-1,arr);
    reverse(0,n-k,arr);
    reverse(0,n-1,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<search(arr,k,n);
}