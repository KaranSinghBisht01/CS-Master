#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        vector<int> prefix(n);
        prefix[0]=nums[0];
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]+nums[i];
        }
        while(q--){
            long long l,r,k;
            cin>>l>>r>>k;
            l--,r--;
            long long totalsum=prefix[n-1];
            long long newsum=totalsum-prefix[r];
            if(l-1>=0) newsum+=prefix[l-1];
            newsum+=k*(r-l+1);
            if(newsum%2!=0) cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
    }
}