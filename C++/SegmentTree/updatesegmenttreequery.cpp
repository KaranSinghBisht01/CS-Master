#include<bits/stdc++.h>
using namespace std;
void buildtree(int i,int l,int r,vector<int>& nums,vector<int>& sgtree){
    if(l==r){
        sgtree[i]=nums[l];
        return ;
    }
    int mid=l+(r-l)/2;
    buildtree(2*i+1,l,mid,nums,sgtree);
    buildtree(2*i+2,mid+1,r,nums,sgtree);
    sgtree[i]=sgtree[2*i+1]+sgtree[2*i+2];
}
void updatequery(int ind,int val,int i,int l,int r,vector<int>& nums,vector<int>& sgtree){
    if(l==r){
        sgtree[i]=val;
        return ;
    }
    int mid=l+(r-l)/2;
    if(ind<=mid){
        updatequery(ind,val,2*i+1,l,mid,nums,sgtree);
    }
    else{
        updatequery(ind,val,2*i+2,mid+1,r,nums,sgtree);
    }
    sgtree[i]=sgtree[2*i+1]+sgtree[2*i+2];
}
int rangesum(int i,int st,int ed,int l,int r,vector<int>& nums,vector<int>& segtree){
    if(l>ed || r<st){
        return 0;
    }
    if(l>=st && r>=ed) return segtree[i];
    int mid=l+(r-l)/2;
    return rangesum(2*i+1,st,ed,l,mid,nums,segtree)+rangesum(2*i+2,st,ed,mid+1,r,nums,segtree);
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> sgtree(4*n);
    buildtree(0,0,n-1,nums,sgtree);
    for(int i=0;i<sgtree.size();i++){
        cout<<sgtree[i]<<" ";
    }
    updatequery(3,4,0,0,n-1,nums,sgtree);
    cout<<rangesum(0,2,3,0,n-1,nums,sgtree);
    return 0;
}