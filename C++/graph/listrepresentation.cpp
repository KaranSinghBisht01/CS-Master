// #include<bits/stdc++.h>
// using namespace std;
// vector<list<int>>graph;

// void addedge(int src,int des,bool bi_direc){
//     graph[src].push_back(des);
//     if(bi_direc) graph[des].push_back(src);
// }

// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<"-->";
//         for(auto el:graph[i]) cout<<el<<",";
//         cout<<endl;
//     }
//     return ;
// }
// int main(){
//     int v;
//     cout<<" enter no vertex ";
//     cin>>v;
//     graph.resize(v);
//     int e;
//     cout<<" enter no of edges ";
//     cin>>e;
//     while(e--){
//         int s,d;
//         cin>>s>>d;
//         addedge(s,d,true);
//     }
//     display();
// }

#include<bits/stdc++.h>
using namespace std;
vector<list<pair<int,int>>>graph;

void addedge(int src,int des,int wt,bool bi_direc){
    graph[src].push_back({des,wt});
    if(bi_direc) graph[des].push_back({src,wt});
}

void display(){
    for(int i=0;i<graph.size();i++){
        cout<<i<<"-->";
        for(auto el:graph[i]) cout<<"("<<el.first<<","<<el.second<<")";
        cout<<endl;
    }
    return ;
}
int main(){
    int v;
    cout<<" enter no vertex ";
    cin>>v;
    graph.resize(v);
    int e;
    cout<<" enter no of edges ";
    cin>>e;
    while(e--){
        int s,d,wt;
        cin>>s>>d>>wt;
        addedge(s,d,wt,true);
    }
    display();
}
