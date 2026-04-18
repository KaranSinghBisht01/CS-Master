// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,3,5,4,1,0};
//     for(int i=0;i<6;i++){
//         if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
//             cout<<arr[i];
//         }
//     }
// }

// binary search

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"array must be the mountain array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int high=n-2;
    bool flag=false ;
    int low=1; // 0 and last index can not be the peak index. 
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            flag=true;
            break;
        }
        else if(arr[mid]>arr[mid+1]) high =mid-1;// array is in mountain form.
        else low=mid+1;
    }
    if(flag==false ) cout<<-1;
}