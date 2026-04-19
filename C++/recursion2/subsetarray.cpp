#include<iostream>
#include<vector>
#include<string>
using namespace std;
void removee(int arr[],vector<int>brr,int i,int size){
    if(i==size){
        for(int i=0;i<brr.size();i++){
            cout<<brr[i]<<" ";
        }
        cout<<endl;
        return;
    }
    removee(arr,brr,i+1,size);
    brr.push_back(arr[i]);
    removee(arr,brr,i+1,size);
}
int main(){
    int arr[]={1,2,3};
    vector<int>brr;
    int size=sizeof(arr)/sizeof(arr[0]);
    removee(arr,brr,0,size);
}