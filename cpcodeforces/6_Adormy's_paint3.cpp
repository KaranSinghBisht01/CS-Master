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
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[arr[i]]++;
        }
        if(freq.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(freq.size()==2){
            int f,s;
            auto it=freq.begin();
            f=it->second;it++;
            s=it->second;
            if(abs(s-f)<=1) cout<<"Yes"<<endl;
            else cout<<"No"<<endl; 
        }
        else cout<<"No"<<endl;
    }
    return 0;
}