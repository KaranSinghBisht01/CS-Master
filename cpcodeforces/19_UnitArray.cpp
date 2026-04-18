#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int totalneg=0,totalpos=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0) totalneg++;
            else totalpos++;
        }
        int sum=totalpos-totalneg;
        int ops=0;
        if(sum<=0){
            int need=(-sum+1)/2;
            ops+=need;
            totalneg-=need;
        }
        if(totalneg%2!=0) ops++;
        cout<<ops<<endl;
    }
}