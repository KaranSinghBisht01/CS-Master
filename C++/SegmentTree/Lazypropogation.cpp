#include<bits/stdc++.h>
using namespace std;
void buildtree(int i,int l,int r,vector<int>& sgtree,vector<int>& nums){
    if(l==r){
        sgtree[i]=nums[l];
        return ;
    }
    int mid=l+(r-l)/2;
    buildtree(2*i+1,l,mid,sgtree,nums);
    buildtree(2*i+2,mid+1,r,sgtree,nums);
    sgtree[i]=sgtree[2*i+1]+sgtree[2*i+2];
}
void rangesum(int i,int l,int r,int st,int ed,int val,vector<int>& nums,vector<int>& sgtree,vector<int>& lazy){
    if(lazy[i]!=0){
        sgtree[i]+=(r-l+1)*lazy[i];
        if(l!=r){
            lazy[2*i+1]+=lazy[i];
            lazy[2*i+2]+=lazy[i];
        }
        lazy[i]=0;
    }
    if(st>r || ed<l) return ;
    if(l>=st && r<=ed){
        sgtree[i]+=(r-l+1)*val;
        if(l!=r){
            lazy[2*i+1]+=val;
            lazy[2*i+2]+=val;
        }
        return ;
    }
    int mid=l+(r-l)/2;
    rangesum(2*i+1,l,mid,st,ed,val,nums,sgtree,lazy);
    rangesum(2*i+2,mid+1,r,st,ed,val,nums,sgtree,lazy);
    sgtree[i]=sgtree[2*i+1]+sgtree[2*i+2];

}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> sgtree(4*n),lazy(4*n);
    buildtree(0,0,n-1,sgtree,nums);
    for(int i=0;i<=2*n-1;i++){
        cout<<sgtree[i]<<" ";
    }
    int st,ed,val;
    cin>>st>>ed>>val;
    rangesum(0,0,n-1,st,ed,val,nums,sgtree,lazy);
    return 0;
}