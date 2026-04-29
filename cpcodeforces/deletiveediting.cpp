#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        string s,t;
        cin>>s>>t;
        int n=s.size(),m=t.size();
        vector<int> freqt(26,0);
        for(int i=0;i<m;i++){
            freqt[t[i]-'A']++;
        }
        // preserving last occurance 
        for(int i=n-1;i>=0;i--){
            if((freqt[s[i]-'A'])>0){
                freqt[s[i]-'A']--;
            }
            else{
                s[i]='.'; // removed
            }
        }
        string temp="";
        for(int i=0;i<n;i++){
            if(s[i]!='.') temp+=s[i];
        }
        if(temp==t) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}