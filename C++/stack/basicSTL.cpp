// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(10);
//     st.push(20);
//     st.push(30);
//     st.push(40);
//     //cout<<st.size()<<endl;//4 
//     //cout<<st.top()<<endl;//40
//     //st.pop();
//     //cout<<st.top()<<endl;//30
//     //cout<<st.size()<<endl;//3

//     // while(st.size()>0){
//     //     cout<<st.top()<<" ";
//     //     st.pop();
//     // }
     
//     // maintaining stack elements 

//     stack<int> temp;
//     while(st.size()>0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();
//     }
//     cout<<endl;
//     while(temp.size()>0){
//         st.push(temp.top());
//         temp.pop();
//     }
//     cout<<st.top();
// }

#include<iostream>
#include<stack>
using namespace std;
void Display(stack<int>& st){
    //cout<<st.top();
    if(st.size()==0) return ;
    int x=st.top();
    cout<<x<<" ";
    st.pop();
    Display(st);
    cout<<endl;
    st.push(x);
    cout<<st.top()<<" ";
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // stack<int> temp;
    // while(st.size()>0){
    //     temp.push(st.top());
    //     //cout<<st.top()<<" ";
    //     st.pop();
    //     //cout<<temp.top()<<" ";
    // }
    // while(temp.size()>0){
    //     cout<<temp.top()<<" ";
    //     temp.pop();
    // }
    Display(st);
}