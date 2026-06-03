#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<pair<long long,long long>> p(n);
        for(long long i=0;i<n;i++){
            long long x;
            cin>>x;

            p[i]={x,i+1};
        }
        for(long long i=0;i<n;i++){
            p[i].first=p[i].first%k;
            if(p[i].first==0) p[i].first=k;
        }
        sort(p.begin(),p.end(), [&](pair<long long, long long> a, pair<long long, long long> b) {
			if (a.first != b.first)
				return a.first > b.first;
			return a.second < b.second;
		});
        for(auto it : p){
            cout<<it.second<<" ";
        }
        cout<<"\n";
    }
}