#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<vector<long long>> arr;//.
        for(long long i=0;i<n;i++){
            long long m;
            cin>>m;
            vector<long long> nums(m);
            for(long long j=0;j<m;j++){
                cin>>nums[j];
            }
            arr.push_back(nums);
        }

        long long smallest=INT_MAX;
        long long ind=-1;
        vector<long long> secsmall;
        for(long long i=0;i<arr.size();i++){
            long long sm=INT_MAX;
            long long sesm=INT_MAX;
            for(long long j=0;j<arr[i].size();j++){
                if(arr[i][j]<sm){
                    sesm=sm;
                    sm=arr[i][j];
                }
                else{
                    sesm=min(sesm,arr[i][j]);
                }
            }
            if(sm<smallest){
                smallest=sm;
                ind=i;
            }
            secsmall.push_back(sesm);
        }
        long long ans=0;
        sort(secsmall.begin(),secsmall.end());
        long long sum=accumulate(secsmall.begin(),secsmall.end(),0LL);
        ans=(sum+smallest)-secsmall[0];
        cout<<ans<<"\n";
    }
}