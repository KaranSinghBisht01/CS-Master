#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> sum(n);
    for(int i=0;i<n;i++){
        cin>>sum[i];
    }
    int s=0;
    vector<int> psum(n);
    for(int i=0;i<n;i++){
        if(i==0) psum[i]=sum[i]; 
        else{
            s=sum[i]+sum[i-1];
            psum[i]=s;
        }
    }
    for(int i=0;i<n;i++){
        cout<<psum[i]<<" ";
    }
    return 0;
}