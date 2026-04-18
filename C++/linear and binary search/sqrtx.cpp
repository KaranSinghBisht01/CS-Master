// // // #include<iostream>
// // // using namespace std;
// // // int main(){
// // //     int n;
// // //     cin>>n;
// // //     for(int i=0;i<n;i++){
// // //         if(i*i==n) {
// // //             cout<<i;
// // //             break;
// // //         }
// // //     }
// // // }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int low=0;
//     int high=n-1;
//     while(low<=high){
//         int mid=low+(high-low);
//         long long m=mid;
//         if(m*m==n){
//             cout<<m;
//             return 0;
//         }
//         else if(m*m>n) high=mid-1;
//         else low=mid+1;
//     }
//     cout<<high;
//     return 0;
// }
