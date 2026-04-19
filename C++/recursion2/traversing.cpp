// // #include<iostream>
// // using namespace std;
// // void print(int arr[],int i,int n){
// //     if(i==n) return ;
// //     cout<<arr[i]<<" ";
// //     print(arr,i+1,n);
// // }
// // int main(){
// //     int arr[50];
// //     int n;
// //     cin>>n;
// //     for(int i=0;i<n;i++){
// //         cin>>arr[i];
// //     }
// //     print(arr,0,n);
// // }

// // max

#include<iostream>
using namespace std;
void  print(int arr[],int i,int n,int max){
    if(arr[i]>max) max=arr[i];
    if(i==n) {
        cout<<max;
        return ;
    }
    print(arr,i+1,n,max);
}
int main(){
    int arr[50];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    print(arr,0,n,max);
    return 0;
}

// #include<iostream>
// #include<vector>
// using namespace std;
// void print(vector<int>&v,int x){
//     if(x==v.size()) return ;
//     cout<<v[x];
//     print(v,x+1);
// }
// int main(){
//     int n;
//     cin>>n;
//     vector<int>v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     print(v,0);
// }