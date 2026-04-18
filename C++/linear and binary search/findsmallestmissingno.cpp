#include<iostream>
using namespace std;
int main(){
    int arr[]={0,1,2,3,4,6,7,8};
    // for(int i=0;i<8;i++){
        // if(arr[i]+1!=arr[i+1]){
        //     cout<<arr[i]+1;
        //     break;
        // }
        // for(int i=0;i<8;i++){
        //     if(i!=arr[i]){
        //         cout<<i;
        //         break;
        //     }
        // }
    // }
      int high=7;
    int low=0;
    int ans;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]!=mid) {
            high=mid-1;
            ans=mid;
        }
        else low=mid+1;
    }
    cout<<ans;
}