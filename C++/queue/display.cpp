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
void revdisplay(queue<int>& q){
    stack<int> st;
    int i=q.size();
    while(i>0){
        int x=q.front();
        q.pop();
        st.push(x);
        q.push(x);
        i--;
    }
    while(st.size()>0){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
void removeevenidxele(queue<int>& q){
    //int i=0;
    int n=q.size();
    for(int i=0;i<n;i++){
        int x=q.front();
        q.pop();
        if(i%2!=0){
            q.push(x);
        }
    }
}
int main(){
    queue<int> q;
    cout<<"enter elements ";
    for(int i=0;i<=5;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    display(q);
    //q.pop();
    revdisplay(q);
    removeevenidxele(q);
    display(q);
}