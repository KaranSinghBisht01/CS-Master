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
        int countzero=0;
        int left=0,right=n-1;
        while(left<n && nums[left]==0){
            left++;
            countzero++;
        }
        if(countzero==n) cout<<0<<"\n";
        else{
            while(right>=0 && nums[right]==0){
                right--;
                countzero++;
            }
            bool iszero=false;
            for(int i=left;i<=right;i++){
                if(nums[i]==0){
                    iszero=true;
                }
            }
        
            if(iszero==false){
                cout<<1<<"\n";
            }
            else{
                cout<<2<<"\n";
            }
        }
    }
}