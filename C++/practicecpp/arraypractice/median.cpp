#include<iostream>
#include<vector>
using namespace std;
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double as=0;
        int n=nums1.size();
        int m=nums2.size();
        vector<int> ans(n+m);
        int i=0;
        int j=0;
        int k=0;
        while(i<n && j<m){
            ans[k++]=nums1[i++];
            ans[k++]=nums2[j++];
        }
        if(i==n) ans[k++]=nums2[j++];
        if(j==m) ans[k++]=nums1[i++];
        int x=ans.size()/2;
        if(ans.size()%2!=0) as=(ans[x]+ans[x+1])/2;
        else as= ans[x]/2;
        return as;
    }
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int m;
    cout<<"enter m ";
    cin>>m;
    vector<int>v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    double ans;
    ans=findMedianSortedArrays(v,v2);
    cout<<ans;
}