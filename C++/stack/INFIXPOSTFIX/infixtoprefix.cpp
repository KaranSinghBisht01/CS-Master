#include<bits/stdc++.h>
using namespace std;
int pr(char ch){
    if(ch=='+' || ch=='-') return 1;
    return 2;
}
string solve(string val1,string val2,char ch){
    string s="";
    s.push_back(ch);
    s+=val1;
    s+=val2;
    return s;
}
int main(){
    string s="2+6*4/8-3";
    stack<string> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57 ){
            //cout<<s[i]<<endl;
            val.push(to_string(s[i]-48));
        }
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]); 
            else if(op.top()=='(' ) op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);
                    val.push(ans);  
                    //cout<<ans<<endl; 
                }
                op.pop();
            }
            else if(pr(s[i])>pr(op.top())) op.push(s[i]); 
            else {
                while(op.size()>0 && pr(s[i])<=pr(op.top())){
                    char ch=op.top();
                    op.pop();
                    string val2=val.top();
                    val.pop();
                    string val1=val.top();
                    val.pop();
                    string ans=solve(val1,val2,ch);  
                    val.push(ans);
                    //cout<<ans<<endl; 
                }
                op.push(s[i]);
            }

        }
    }
    while(op.size()>0){
        char ch=op.top();
        op.pop();
        string val2=val.top();
        val.pop();
        string val1=val.top();
        val.pop();
        string ans=solve(val1,val2,ch);  
        val.push(ans);
        //cout<<ans<<endl;
    }
    cout<<val.top()<<endl;
    cout<<1+(5*8)+6/2;
}

// #include<bits/stdc++.h>
// using namespace std;
// int pr(char ch){
//     if(ch=='+' || ch=='-') return 1;
//     return 2;
// }
// string solve(string val1,string val2,char ch){
//     string x="";
//     x.push_back(ch);
//     x+=val1;
//     x+=val2;
//     return x;
// }
// int main(){
//     stack<string> val;
//     stack<char> op;
//     string s= "2+6*4/8-3";
//     for(int i=0;i<s.size();i++){
//         if(s[i]>=48 && s[i]<=57){
//             val.push(to_string(s[i]-48));
//         }
//         else{
//             if(op.size()==0) op.push(s[i]);
//             else if(s[i]=='(') op.push(s[i]);
//             else if(op.top()=='(') op.push(s[i]);
//             else if(s[i]==')'){
//                 while(op.top()!='('){
//                     char ch=op.top();
//                     op.pop();
//                     string val2=val.top();
//                     val.pop();
//                     string val1=val.top();
//                     val.pop();
//                     string ans=solve(val1,val2,ch);
//                     val.push(ans);
//                 }
//                 op.pop();
//             }
//             else if(pr(s[i])>pr(op.top())) op.push(s[i]);
//             else{
//                 while(op.size()>0 && pr(s[i])<=pr(op.top())){
//                 char ch=op.top();
//                 op.pop();
//                 string val2=val.top();
//                 val.pop();
//                 string val1=val.top();
//                 val.pop();
//                 string ans=solve(val1,val2,ch);
//                 val.push(ans);
//                 }
//                 op.push(s[i]);
//             }
//         }
//     }
//     while(op.size()>0){
//         char ch=op.top();
//         op.pop();
//         string val2=val.top();
//         val.pop();
//         string val1=val.top();
//         val.pop();
//         string ans=solve(val1,val2,ch);
//         val.push(ans);
//     }
//     cout<<val.top();
// }