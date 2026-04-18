// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<int> v(n);
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     vector<int> pre(n);
//     pre[0]=v[0];
//     for(int i=1;i<n;i++){
//         pre[i]=v[i]*pre[i-1];
//     }
//     for(int i=0;i<n;i++){
//         cout<<pre[i]<<" ";
//     }
// }

// SUFFIX PRODUCT 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> suf(n);
    suf[n-1]=nums[n-1];
    for(int i=n-2;i>=0;i--){
        suf[i]=suf[i+1]*nums[i];
    }
    for(int i=0;i<n;i++){
        cout<<suf[i]<<" ";
    }
}