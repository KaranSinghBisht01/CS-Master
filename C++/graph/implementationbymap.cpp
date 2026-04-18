#include<bits/stdc++.h>
using namespace std;

vector<unordered_map<int,int>> graph;
void addedges(int src,int des,int wt){
    int bi_direc=true;
    graph[src][des]=wt;
    if(bi_direc)  graph[des][src]=wt;
}
void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-->";
        for(auto ele:graph[i]) cout<<"("<<ele.first<<","<<ele.second<<")";
        cout<<endl;
    }
}
int main(){
    int v;
    cout<<"enter total no of virtes ";
    cin>>v;
    graph.resize(v);
    int e;
    cout<<"enter total no of edges ";
    cin>>e;
    while(e--){
        int src,des,wt;
        cin>>src>>des>>wt;
        addedges(src,des,wt);
    }
    display();
    return 0;
}