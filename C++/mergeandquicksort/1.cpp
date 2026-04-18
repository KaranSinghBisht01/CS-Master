#include<iostream>
#include<vector>
using namespace std;
void mergesort(vector<int>& arr,vector<int>& brr,vector<int>& res){
    int i=0;
    int j=0;
    int k=0;
    while(i<arr.size() && j<brr.size()){
        if(arr[i]<brr[j]) res[k++]=arr[i++];
        else res[k++]=brr[j++];
    }
    if(i==arr.size()) while(j<brr.size()) res[k++]=brr[j++];
    if(j==brr.size()) while(i<arr.size()) res[k++]=arr[i++];
    return ;
}
void merge(vector<int>& v){
    int n=v.size();
    if(n==1) return ;
    int n1=n/2;
    int n2=n-n/2;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[n1+i];
    }
    merge(v1);
    merge(v2);
    mergesort(v1,v2,v);
    v1.clear();
    v2.clear();
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    merge(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}