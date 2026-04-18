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
bool dfs(int curr,int des){
    if(curr==des) return true;
    vis.insert(curr);
    for(auto neighbour : graph[curr]){
        if(!vis.count(neighbour)){
            bool result = dfs(neighbour,des);
            if(result) return true;
        }
    }
    return false;
}
bool path(int src,int des){
    vis.clear();
    return dfs(src,des);
}
int main(){
    int v;
    cin>>v;
    graph.resize(v);
    int e;
    cin>>e;
    while(e--){
        int src,des;
        cin>>src>>des;
        addedges(src,des);
    }
    display();
    cout<<dfs(0,6);
    return 0;
}