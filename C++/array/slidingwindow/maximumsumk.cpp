// // // // #include<iostream>
// // // // using namespace std;
// // // // int main(){
// // // //     int arr[]={7,1,2,5,8,4,9,3,6};
// // // //     int n=sizeof(arr)/sizeof(arr[0]);
// // // //     int k=3;
// // // //     int max=0;
// // // //     for(int i=0;i<=n-k;i++){
// // // //         int sum=0;
// // // //         for(int j=i;j<=i+k-1;j++){
// // // //             sum+=arr[j];
// // // //             cout<<arr[j]<<",";
// // // //         }
// // // //         //if(sum>max) max=sum;
// // // //         cout<<endl;
// // // //     }
// // // //     //<<max;
// // // // }

// // // // SLIDING WINDOW ALGORITHM 

// // // #include<iostream>
// // // #include<climits>
// // // using namespace std;
// // // int main(){
// // //     int arr[]={7,1,2,5,8,4,9,3,6};
// // //     int n=sizeof(arr)/sizeof(arr[0]);
// // //     int k=4;
// // //     int maxsum=INT_MIN;
// // //     int sum=0;
// // //     for(int m=0;m<k;m++){
// // //         sum+=arr[m];
// // //     }
// // //     int i=1,j=k;
// // //     while(j<n){
// // //         //int currsum=presum+arr[j]-arr[i-1];
// // //         sum=sum+arr[j]-arr[i-1];
// // //         if(sum>maxsum) maxsum=sum;
// // //         i++;
// // //         j++;
// // //         //presum=currsum;
// // //     }
// // //     cout<<maxsum;
// // // }

// // for(int i=0;i<n;i++){
// //             long long pro=0;
// //             int count=1;
// //             for(int j=i;j<n;j++){
// //                 if(i==j){
// //                     if(nums[j]<k) ans++;
// //                     count++;
// //                 }
// //                 else {
// //                     pro +=(nums[j]+nums[j-1])*count;
// //                     count++;
// //                 }
// //                 if(pro<k) ans++;
// //                 if(pro>=k) break;
// //                 //pro=0;
// //             }
// //         }
// //         return ans;

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int> v(5);
//     for(int i=0;i<5;i++){
//         cin>>v[i];
//     }
//     int k=14;
//     int l=0,r=0,sum=0,maxlen=0;
//     while(r<v.size()){
//         sum+=v[r];
//         while(sum>k){
//             sum-=v[l];
//             l++;
//         }
//         maxlen=max(maxlen,r-l+1);
//         r++;
//     }
//     cout<<maxlen<<"   ";
// }

// maximum points you can obtain from cards 

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums={6,2,3,4,7,2,1,7,1};
    int k=4;
    int n=nums.size();
    int n1=k-1;
    int n2=n;
    int maxsum=INT_MIN;
    for(int i=0;i<k;i++){
        int sum1=0,sum2=0,x=0,y=n-1;
        while(x<=n1) sum1+=nums[x++];
        while(y>=n2) sum2+=nums[y--];

        maxsum=max(maxsum,(sum1+sum2));
        cout<<sum1+sum2<<" ";
        n1--,n2--;
    }
    cout<<endl<<maxsum<<" ";
}