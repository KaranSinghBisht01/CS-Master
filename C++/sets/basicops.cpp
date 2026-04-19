#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int> s; // ordered set elements are in random order 
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    for(int ele:s){
        cout<<ele<<" ";
    }

    int target=5;
    if(s.find(target)!=s.end()) cout<<endl<<"exist ";
    else cout<<"does'nt exist ";

    return 0;

}