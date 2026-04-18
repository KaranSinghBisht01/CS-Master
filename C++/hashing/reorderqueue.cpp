#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    int n;
    cout<<"enter size ";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        q.push(x);
    }
    stack<int> st;
    if(n%2!=0){
        cout<<"reoder can not be possible ";
        return 0;
    }

    // STEP 1 A->QUEUE TO STACK 
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    // STEP 1 B->STACK TO QUEUE
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }

    // STEP 2-> PUSH CURRENT QUEUE'S 1ST HALF INTO STACK  
    for(int i=0;i<n/2;i++){
        st.push(q.front());
        q.pop();
    }
    
    // while(st.size()>0){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<endl;
    //   while(q.size()>0){
    //     cout<<q.front()<<" ";
    //     q.pop();
    // }


    // STEP 3->PUSH ELEMENTS IN STACK FORM BOTH(QUEUE AND STACK)

    while(st.size()>0){
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while(q.size()>0){
        st.push(q.front());
        q.pop();
    }
    while(st.size()>0){
        q.push(st.top());
        st.pop();
    }
    while(q.size()>0){
        cout<<q.front()<<" ";
        q.pop();
    }
}