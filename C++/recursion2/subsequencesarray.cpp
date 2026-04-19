// // #include<iostream>
// // #include<vector>
// // using namespace std;
// // void removee(int arr[],vector<int>brr,int i,int size,int k){
// //     if(i==size){
// //         if(brr.size()==k){
// //             for(int i=0;i<brr.size();i++){
// //             cout<<brr[i]<<" ";
// //             }
// //             cout<<endl;
// //         }
// //         return;
// //     }
// //     removee(arr,brr,i+1,size,k);
// //     brr.push_back(arr[i]);
// //     removee(arr,brr,i+1,size,k);
// // }
// // int main(){
// //     int arr[]={1,2,3,4,5};
// //     int k=3;
// //     vector<int>brr;
// //     int size=sizeof(arr)/sizeof(arr[0]);
// //     removee(arr,brr,0,size,k);
// // }

// #include<iostream>
// #include<vector>
// using namespace std;
// void subs(int arr[],vector<int>ans,int i,int n,int k){
//     if(i==n){
//         if(ans.size()==k){
//             for(int i=0;i<ans.size();i++){
//                 cout<<ans[i]<<" ";
//             }
//             cout<<endl;
//         }
//         return ;
//     }
//     subs(arr,ans,i+1,n,k);
//     ans.push_back(arr[i]);
//     subs(arr,ans,i+1,n,k);
// }
// int main(){
//     int arr[50];
//     for(int i=0;i<5;i++){
//         cin>>arr[i];
//     }
//     vector<int>ans;
//     subs(arr,ans,0,5,3);
// }