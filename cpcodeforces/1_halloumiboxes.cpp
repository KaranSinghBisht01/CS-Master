#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long> b=a;
        sort(b.begin(),b.end());
        if(b==a || k>1) cout<<"YES"<<endl;
        else cout<<"NO"<<"\n";
    }
    return 0;
}