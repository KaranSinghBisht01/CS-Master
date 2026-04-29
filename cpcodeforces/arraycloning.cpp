#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int maxfreq=0;
        for(auto it:freq){
            maxfreq=max(maxfreq,it.second);
        }
        int count=0;
        while(maxfreq<n){
            count++;
            if(maxfreq*2<=n){
                count+=maxfreq;
                maxfreq*=2;
            }
            else{
                count+=n-maxfreq;
                maxfreq=n;
            }
        }
        cout<<count<<"\n";
    }
}