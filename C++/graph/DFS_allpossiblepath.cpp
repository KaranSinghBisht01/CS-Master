// #include<bits/stdc++.h>
// using namespace std;
// unordered_set<int> vis;
// vector<list<int>> graph;
// void addedges(int src,int des,bool flag=true){
//     graph[src].push_back(des);
//     if(flag) graph[des].push_back(src);
// }
// void display(){
//     for(int i=0;i<graph.size();i++){
//         cout<<i<<"-->";
//         for(auto neighbour:graph[i]){
//             cout<<neighbour<<" "; 
//         }
//         cout<<endl;
//     }
//     return ;
// }
// bool DFS(int curr,int des,vector<int>& ans){
//     if(curr==des){
//         ans.push_back(curr);
//         return true;
//     }
//     vis.insert(curr);
//         for(auto neighbour:graph[curr]){
//             if(!vis.count(neighbour)){
//                 ans.push_back(neighbour);
//                 if(DFS(neighbour,des,ans)) return true;
//                 ans.pop_back();
//             }
//         }
//     return false;
// }
// void findpath(int src,int des,vector<vector<int>> &path){
//     vis.clear();
//     vector<int> check;
//     if(DFS(src,des,check))path.push_back(check);
//     for(int i=0;i<path.size();i++){
//         for(int j=0;j<path[i].size();j++){
//             cout<<path[i][j]<<" ";
//         }
//     }
//     return ;
// }
// int main(){
//     int v,e;
//     cout<<"enter total no of vertices ";
//     cin>>v;
//     cout<<"enter total no of edges ";
//     cin>>e;
//     graph.resize(v);
//     while(e--){
//         int src,des;
//         cin>>src>>des;
//         addedges(src,des);
//     }
//     display();
//     vector<vector<int,int>> path;
//     int x,y;
//     cout<<"enter source and destination ";
//     cin>>x>>y;
//     findpath(x,y,path);
// }

#include <bits/stdc++.h>
using namespace std;

unordered_set<int> vis;
vector<list<int>> graph;

void addedges(int src, int des, bool flag = true) {
    graph[src].push_back(des);
    if (flag) graph[des].push_back(src);
}

void display() {
    for (int i = 0; i < graph.size(); i++) {
        cout << i << "-->";
        for (auto neighbour : graph[i]) {
            cout << neighbour << " ";
        }
        cout << endl;
    }
}

bool DFS(int curr, int des, vector<int>& ans) {
    if (curr == des) {
        ans.push_back(curr);
        return true;
    }
    vis.insert(curr);
    ans.push_back(curr);
    for (auto neighbour : graph[curr]) {
        if (!vis.count(neighbour)) {
            if (DFS(neighbour, des, ans)) return true;
            ans.pop_back();  // Backtrack
        }
    }
    return false;
}

void findpath(int src, int des, vector<vector<int>>& path) {
    vis.clear();
    vector<int> check;
    if (DFS(src, des, check)) {
        path.push_back(check);
    }

    for (auto& p : path) {
        for (int node : p) {
            cout << node << " ";
        }
        cout << endl;
    }
}

int main() {
    int v, e;
    cout << "Enter total no of vertices: ";
    cin >> v;
    cout << "Enter total no of edges: ";
    cin >> e;
    graph.resize(v);

    while (e--) {
        int src, des;
        cin >> src >> des;
        addedges(src, des);
    }

    display();

    vector<vector<int>> path;
    int x, y;
    cout << "Enter source and destination: ";
    cin >> x >> y;
    findpath(x, y, path);

    return 0;
}
