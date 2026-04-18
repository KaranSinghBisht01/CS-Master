#include<bits/stdc++.h>
using namespace std;
int fun(int n,vector<int>& arr,vector<int>& dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int left=fun(n-1,arr,dp)+abs(arr[n]-arr[n-1]);
    int right=INT_MAX;
    if(n>1) right=fun(n-2,arr,dp)+abs(arr[n]-arr[n-2]);
    return dp[n]=min(right,left);
}
int main(){
    vector<int> arr={30,10,60,10,60,50};
    int n=arr.size();
    vector<int> dp(n,-1);
    dp[0]=0;
    cout<<fun(arr.size()-1,arr,dp)<<endl;
    // cout<<dp[dp.size()-1];
    for(int i=0;i<dp.size();i++){
        cout<<dp[i]<<" "; 
    }
    return 0;
}