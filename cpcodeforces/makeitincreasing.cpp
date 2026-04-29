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
        int count=0,i=n-2;
        bool iszero=false;
        while(i>=0){
            while(nums[i]>=nums[i+1]){
                nums[i]/=2;
                count++;
                if(nums[i]==0) break;
            }
            if(nums[i]==0 && nums[i+1]==0){
                count=-1;
                break;
            }
            i--;
        }
        cout<<count<<"\n";
    }
}