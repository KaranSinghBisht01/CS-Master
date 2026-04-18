#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,5,9,15,18,21,24};
    int x=23;
    int low=0;
    int high=8;
    bool flag=false ;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid+1];
            break;
        }
        else if(arr[mid]>x) high=mid-1;
        else low=mid+1;
    }
    if(flag==false) cout<<arr[low];
}