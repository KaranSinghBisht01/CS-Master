#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int i=0;
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    while(i<n){
        int correctidx= v[i]-1;
        if(i==correctidx) i++;
        else swap(v[i],v[correctidx]);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}