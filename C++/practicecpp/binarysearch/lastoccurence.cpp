#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array ";
    cin>>n;
    cout<<"enter the element of the array ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cout<<"enter x ";
    cin>>x;
    int idx=-1;
    int low=0;
    int high=n-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){
            if(arr[mid+1]==x){
                low=mid+1;
                idx=mid+1;
                flag=true;
            }
            else {
                cout<<idx;
                break;
            }
        }
        else if(arr[mid]>x) high=mid-1; 
        else low=mid+1;
    }
    if(flag==false) cout<<idx;
}