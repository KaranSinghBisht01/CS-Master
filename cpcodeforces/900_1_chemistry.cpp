#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> freq;
        for(int i=0;i<n;i++){
            freq[s[i]]++;
        }
        int noofodd=0;
        for(auto map:freq){
            if(map.second%2!=0) noofodd++;
        }
        if(n-k<=1) cout<<"YES"<<endl;
        else if(noofodd==0 || noofodd<=k) cout<<"YES"<<endl;
        else if(abs(noofodd-k)>1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}