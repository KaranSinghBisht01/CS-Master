#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int maxcount=0,count=1;
        for(int i=1;i<s.size();i++){
            if(s[i]==s[i-1]) count++;
            else{
                maxcount=max(count,maxcount);
                count=1;
            }
        }
        maxcount=max(count,maxcount);
        cout<<maxcount+1<<endl;
    }
}