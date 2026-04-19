// find index of key if key is not present display msg
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int key;
    cout<<"enter the element to be found ";
    cin>>key;
    vector<int>v;
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    bool flag=false;
    int low=0;
    int high=v.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(v[mid]==key){
            cout<<mid;
            flag=true;
            break;
        }
        else if(v[mid]>key) low=mid+1;
        else high=mid-1;
    }
    if(flag==false ) cout<<"given no is not present in given array ";
}