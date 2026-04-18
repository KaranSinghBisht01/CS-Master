#include<bits/stdc++.h>
using namespace std;
vector<list<int>> graph;
unordered_set<int> vis;
void addedges(int src,int des,bool bidrec=true){
    graph[src].push_back(des);
    if(bidrec) graph[des].push_back(src);
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-->";
        for(auto ele:graph[i]) cout<<ele<<" ";
        cout<<endl;
    }
}
// bool dfs(int curr,int des){
//     if(curr==des) return true;
//     vis.insert(curr);
//     for(auto neighbour : graph[curr]){
//         if(!vis.count(neighbour)){
//             bool result = dfs(neighbour,des);
//             if(result) return true;
//         }
//     }
//     return false;
// }

void Bfs(int src,vector<int> &dist){
    vis.clear();
    queue<int> q;
    q.push(src);
    //dist.resize();
    dist[src]=0;
    vis.insert(src);
    while(!q.empty()){
        int curr=q.front();
        q.pop();
        for(auto neighbour : graph[curr]){
            if(!vis.count(neighbour)){
                vis.insert(neighbour);
                q.push(neighbour);
                dist[neighbour]=dist[curr]+1;
            }
        }
    }
    return ;
}

int main(){
    int v;
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    vis.clear();
    while(e--){
        int src,des;
        cin>>src>>des;
        addedges(src,des);
    }
    display();
    //cout<<dfs(0,6);
    vector<int> dist(v,INT_MAX);
    Bfs(0,dist);
    for(int i=0;i<dist.size();i++){
        cout<<dist[i]<<" ";
    }
    return 0;
}