#include<bits/stdc++.h>
using namespace std;
void display(queue<int>& q){
    int i=q.size();
    while(i>0){
        int x=q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
        i--;
    }
    cout<<endl;
}
void reversekele(int k,queue<int>& q){
    stack<int> st;
    if(k>q.size()) k=k%q.size();
    for(int i=1;i<=k;i++){
        int x=q.front();
        q.pop();
        st.push(x);
    } 
    //int n=st.size();
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    int i=0;
    while(i<q.size()-k){
        q.push(q.front());
        q.pop();
        i++;
    }
}
int main(){
    queue<int> q;
    for(int i=0;i<6;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    int k=3;
    display(q);
    reversekele(k,q);
    display(q);
}