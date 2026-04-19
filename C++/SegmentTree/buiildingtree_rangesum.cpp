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
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> sgtree(2*n);
    buildtree(0,0,n-1,sgtree,nums);
    for(int i=0;i<sgtree.size();i++){
        cout<<sgtree[i]<<" ";
    }
    return 0;
}