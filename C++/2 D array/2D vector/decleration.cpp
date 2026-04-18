#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>>v(3,vector<int>(4,30));
   cout<<v.size()<<endl;
   cout<<v[2].size()<<endl;
   for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl<<endl;
   v.pop_back();
   for(int i=0;i<v.size();i++){
    for(int j=0;j<v[0].size();j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
   }
}