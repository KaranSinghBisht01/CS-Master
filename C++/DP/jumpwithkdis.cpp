#include<bits/stdc++.h>
using namespace std;
int jumpwithk(int n,int k,vector<int>& cost,vector<int>& dp){
    if(n==0) return 0;
    if(dp[n]!=-1) return dp[n];
    int minstep=INT_MAX;
    for(int i=1;i<=k;i++){
        if(n-i>=0){
            int jump=jumpwithk(n-i,k,cost,dp)+abs(cost[n]-cost[n-i]);
            minstep=min(jump,minstep);
        }
    }
    dp[n]=minstep;
    return minstep;
}
int main(){
    vector<int> cost={30,10,60,10,60,50};
    vector<int> dp(cost.size(),-1);
    cout<<jumpwithk(cost.size()-1,2,cost,dp);
    return 0;
}