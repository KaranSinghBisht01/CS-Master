#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end());
        int maxremove=1;
        for(int i=0;i<n-1;i++){
            int left=i;
            while(i<n-1 && abs(nums[i]-nums[i+1])<=k)i++;
            maxremove=max(maxremove,i-left+1);
        }
        if(maxremove>n) cout<<0<<endl;
        else cout<<n-maxremove<<endl;
    }
}