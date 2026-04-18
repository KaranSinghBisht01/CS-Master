#include<iostream>
#include<vector>
using namespace std;
int main (){
    int n,m;
    cout<<" n";
    cin>>n;
    cout<<"m";
    cin>>m;
    vector<int>v;
    vector<int>v2;
    cout<<"enter v";
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v.push_back(c);
    }
    cout<<"enter v2";
    for(int i=0;i<n;i++){
        int c;
        cin>>c;
        v2.push_back(c);
    }
    int i=0;
    int j=0;
    int k=0;
    vector<int>v3(n+m);
    while(k<n+m){
        if(v[i]<v2[j]){
            v3[k]=v[i];
            i++;
            k++;
        }
        else if(v[i]>=v2[j]){
            v3[k]=v2[j];
            j++;
            k++;
        }
    }
    for(int i=0;i<n+m;i++){
        cout<<v3[i]<<" ";
    }
    return 0;
}