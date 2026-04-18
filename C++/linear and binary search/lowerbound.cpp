// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,4,5,9,15,18,21,24};
//     int x=20;
//     int i;
//     for(i=0;i<9;i++){
//         if(arr[i]==x){
//             cout<<arr[i];
//             break;
//         }
//         else if(arr[i]>x){
//             cout<<arr[i-1];
//             break;
//         }
//     }
// }

#include<iostream>
using namespace std;
int main(){
    int x=20;
    int arr[]={1,2,4,5,9,15,18,21,24};
    int low=0;
    int high =8;
    bool flag=false ;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==x){ 
            cout<<arr[mid-1];
            flag =true;
            break;
        }
        else if(arr[mid]<x) low=mid+1;
        else high=mid-1;
    }
    if(flag==false) cout<<arr[high];
}