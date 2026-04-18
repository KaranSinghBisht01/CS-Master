#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<"enter elements of vector";
    for(int i=0;i<5;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(32);
    // v.push_back(34);
    // v.push_back(35);
    // v.push_back(32);
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(3);
    // v.push_back(1);
    // v.push_back(3);
     int x=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            x=i;
            break;
        }
    }
    cout<<x;
    return 0;
}