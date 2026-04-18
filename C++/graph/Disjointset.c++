
#include<bits/stdc++.h>
using namespace std;
class Disjoint{
public:
    vector<int> parent,rank;
public:
    Disjoint(int n){
        parent.resize(n+1,0);
        rank.resize(n+1,0);
        for(int i=0;i<=n;i++){
            parent[i]=i;
        }
    }
    int findulparent(int u){
        if(parent[u]==u) return u;
        return parent[u]=findulparent(parent[u]);
    }
    void unionbyrank(int u,int v){
        int ult_pu=findulparent(u);
        int ult_pv=findulparent(v);
        if(ult_pu==ult_pv) return ;
        
        if(rank[ult_pu]<rank[ult_pv]){
            parent[ult_pu]=ult_pv;
        }
        else if(rank[ult_pu]>rank[ult_pv]){
            parent[ult_pv]=ult_pu;
        }
        else{
            parent[ult_pu]=ult_pv;
            rank[ult_pv]++;
        }
    }
};
int main(){
    Disjoint Ds(7);
    Ds.unionbyrank(1,2);
    Ds.unionbyrank(2,3);
    Ds.unionbyrank(4,5);
    Ds.unionbyrank(6,7);
    Ds.unionbyrank(5,6);
    Ds.unionbyrank(3,7);
    
    cout<<Ds.findulparent(4);
}