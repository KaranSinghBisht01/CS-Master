// // Matrix representation 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int mat[n+1][m+1]={0};
//     for(int i=0;i<m;i++){
//         int u,v;
//         cin>>u>>v;
//         mat[u][v]=1;
//         mat[v][u]=1;
//     }
//     for(int i=0;i<m;i++){
//         for(int j=0;j<m;j++){
//             cout<<mat[i][j]<<" ";
//         }
//         cout<<endl;
//     }
// }

// // list represenatation 
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     vector<pair<int,int>> adjlist[n+1];
//     // Directed graph
//     for(int i=0;i<n;i++){
//         int u,v,wt;
//         cin>>u>>v>>wt;
//         adjlist[u].push_back({v,wt});
//     }
//     for(int i=0;i<n;i++){
//         for(auto neighbour:adjlist[i]){
//             cout<<neighbour.first<<" ";
//         }
//     }
// }