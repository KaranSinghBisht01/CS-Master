#include<iostream>
#include<vector>
using namespace std;
bool isomorphic(string s,string t){
    vector<int> idx;
    vector<int> idx2;
    for(int i=0;i<s.size();i++){
        int count=0;
        for(int j=i;j<t.size();j++){
            if(s[i]==s[j]){
                count++;
                idx.push_back(j);
            }

        }
        if(count!=0) idx.push_back(i);
    }
     for(int i=0;i<t.size();i++){
        int count=0;
        for(int j=i;j<t.size();j++){
            if(t[i]==t[j]){
                count++;
                idx2.push_back(j);
            }

        }
        if(count!=0) idx2.push_back(i);
    }
    for(int i=0;i<idx.size();i++){
        if(idx[i]!=idx2[i]) return 0;
    }
    return 1;
}
int main(){
    string s,t;
    cout<<"enter 1st string ";
    cin>>s;
    cout<<"enter 2nd string ";
    cin>>t;
    cout<<isomorphic(s,t);
}