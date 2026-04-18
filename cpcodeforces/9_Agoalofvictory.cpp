#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> effi(n-1,0);
        for(int i=0;i<n-1;i++){
            cin>>effi[i];
        }
        int totalefficiency=0;
        for(int i=0;i<n-1;i++){
            totalefficiency+=effi[i];
        }
        totalefficiency*=-1;
        cout<<totalefficiency<<endl;
    }
}