#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int sum=a[0];
        bool isdis=false;
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1]) isdis=true;
            if(sum==a[i]){
                if(i+1<n){
                    swap(a[i],a[i+1]);
                    sum+=a[i];
                }
                else swap(a[i],a[i-1]);
            }
            else sum+=a[i];
        }
        if(isdis){
            cout<<"YES\n";
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<"\n";
        }
        else cout<<"NO\n";
    }
}