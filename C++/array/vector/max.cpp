#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter size of array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            // int temp=arr[i];
            // arr[i]=max;
            // max=temp;
            max=arr[i];
        }
    }
    cout<<"max no is "<<max;
    return 0;
}