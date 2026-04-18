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
        vector<int> b,c;
        long long maxel=*max_element(a.begin(),a.end());
        for(int i=0;i<a.size();i++){
            if(a[i]==maxel){
                c.push_back(a[i]);
            }
            else{
                b.push_back(a[i]);
            }
        }
        if(b.size()==0) cout<<-1<<endl;
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0;i<b.size();i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int j=0;j<c.size();j++){
                cout<<c[j]<<" ";
            }
        }
    }
    return 0;
}