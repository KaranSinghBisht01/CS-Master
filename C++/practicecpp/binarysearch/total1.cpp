#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[100];
    cout<<"enter elements of array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int idx=0;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
            if(arr[mid]==0){
                if(arr[mid+1]==0){
                    idx=mid+1;
                    low=mid+1;
                }
                else {
                    break;
                }
            }
        else if(arr[mid]>0) high=mid-1;
        else if(arr[mid]<=0)low=mid+1;
    }
    cout<<((n-1)-idx);
    return 0;
}