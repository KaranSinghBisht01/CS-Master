#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int mincapa=arr[0];
        for(int i=0;i<n-1;i++){
            mincapa=max(mincapa,arr[i+1]-arr[i]);
        }
        mincapa=max(mincapa,2*(x-arr[n-1]));
        cout<<mincapa<<endl;
    }
    return 0;
}