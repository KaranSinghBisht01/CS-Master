#include<bits/stdc++.h>
using namespace std;
using pii=pair<long ,long>;
vector<long long> dijkastra(int n,int src,vector<list<pair<int,int>>> adjlist){
    vector<long long> dist(n,INT_MAX);
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    
    pq.push({0,src});
    dist[src]=0;
    while(!pq.empty()){
        int w=pq.top().first;
        int u=pq.top().second;
        pq.pop();
        if(dist[u]!=w) continue;
        for(auto it:adjlist[u]){
            int v=it.first;
            int wt=it.second;
            if(dist[u]+wt<dist[v]){
                dist[v]=dist[u]+wt;
                pq.push({dist[v],v});
            }
        }
    }
    return dist;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<list<pair<int,int>>>adjlist(n+1);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        adjlist[u].push_back({v,w});
        adjlist[v].push_back({u,w});
    }
    vector<long long> dist;
    int src;
    cin>>src;
    dist=dijkastra(n,src,adjlist);

    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
}