#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> nums(n);
        for(int i=0;i<nums.size();i++){
            cin>>nums[i];
        }
        long long sec=b;
        for(int i=0;i<nums.size();i++){
            sec+=min(nums[i],a-1);
        }
        cout<<sec<<endl;
    }
}