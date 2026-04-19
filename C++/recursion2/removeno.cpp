#include<iostream>
#include<vector>
using namespace std;
void removee(int arr[],vector<int>ans,int size,int i){
    if(i==size){
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        return ;
    }
    if(arr[i]==1) removee(arr,ans,size,i+1);
    else {
        ans.push_back(arr[i]);
        removee(arr,ans,size,i+1);
    }
}
int main(){
    int arr[7]={1,2,1,2,1,2,1};
    vector<int> ans;
    int size=sizeof(arr)/sizeof(arr[0]);
    removee(arr,ans,size,0);
}