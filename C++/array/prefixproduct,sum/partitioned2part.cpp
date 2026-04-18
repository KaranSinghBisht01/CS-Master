#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int j=(n/2)-1,k=(n/2);
    int rsum=0,lsum=0;
    for(int i=0;i<n;i++){
        if(i<n/2){
            lsum+=nums[i];
        }
        else rsum+=nums[i];
    }
    int e=1;
    while(j>=0 || k<n){
        if(lsum<rsum){
            lsum+=nums[j+e];
            e++;
        }
        else if(lsum>rsum){
            
        }
    }
}