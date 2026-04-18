#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& arr,vector<int>& brr,vector<int>& res){
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
int main(){
    int n,m;
    cout<<"enter the size of both array ";
    cin>>n>>m;
    vector<int> arr(n);
    vector<int> brr(m);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<m;i++){
        cin>>brr[i];
    }
    vector<int> res(n+m,0);
    merge(arr,brr,res);
    for(int i=0;i<n+m;i++){
        cout<<res[i]<<" ";
    }
}