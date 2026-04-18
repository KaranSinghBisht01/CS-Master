#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int> sum(n);
        for(int i=0;i<n;i++){
            if(nums[i]==1) sum[i]=nums[i]+1;
            else sum[i]=nums[i];
        }
        for(int i=1;i<n;i++){
            if(sum[i]%sum[i-1]==0) sum[i]=sum[i]+1;
        }
        for(int i=0;i<n;i++){
            cout<<sum[i]<<" ";
        }
        cout<<"\n";
    }
}