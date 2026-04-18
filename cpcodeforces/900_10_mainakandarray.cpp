#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int minv=nums[0];
        int maxv=nums[0];
        for(int i=1;i<n;i++){
            minv=min(minv,nums[i]);
            maxv=max(maxv,nums[i]);
        }
        cout<<maxv-minv<<endl;
    }
}