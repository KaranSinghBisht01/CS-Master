// #include<iostream>
// using namespace std;
// int summ(int st,int ed){
//         int asum=0;
//         for(int i=st;i<=ed;i++){
//             asum+=i;
//         }
//         return asum;
//       } 
// int pivotInteger(int n) {
//       int sum(int st,int ed){
//         int asum=0;
//         for(int i=st;i<=ed;i++){
//             asum+=i;
//         }
//         return asum;
//       }   
//       int sum=0,xsum=0;
//       int x=n;
//       while(x>=0){
//         sum=summ(1,x);
//         xsum=summ(x,n);
//         if(sum==xsum) return x;
//         if(xsum<sum) x--
//       }
//       return x;
//     }
// int main(){
//     int n;
//     cin>>n;
//     int pivot;
//     pivot=pivotInteger(n);
// }
// /*class Solution {
// public:
// int summ(int st,int ed){
//         int asum=0;
//         for(int i=st;i<=ed;i++){
//             asum+=i;
//         }
//         return asum;
//       }   
//     int pivotInteger(int n) {
//       int sum=0,xsum=0;
//       int x=n;
//       while(x>=0){
//         sum=summ(1,x);
//         xsum=summ(x,n);
//         if(sum==xsum) return x;
//         if(xsum<sum) x--;
//       }
//       return x;
//     }
// };*/

// FIND MIDDLE INDEX 

#include<iostream>
#include<vector>
using namespace std;
int sum(int st,int ed,vector<int>& nums){
        int s=0;
        for(int i=st;i<ed;i++){
            s+=nums[i];
        }
        return s;
    }
    int findMiddleIndex(vector<int>& nums) {
        int n=nums.size();
        int pivot=n/2;
        for(int i=0;i<n;i++){
            int s1,s2;
            s1=sum(0,pivot,nums);
            s2=sum(pivot+1,n,nums);
            if(s1==s2) return pivot;
            if(s1>s2) pivot++;
            else pivot--;
        }
        return -1;
    }
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<findMiddleIndex(nums);
  return 0;
}