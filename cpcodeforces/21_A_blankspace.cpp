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
        int maxbs=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                int len=0;
                while(i<n && a[i]==0){
                    len++;
                    i++;
                }
                maxbs=max(maxbs,len);
            }
        }
        cout<<maxbs<<"\n";
    }
}