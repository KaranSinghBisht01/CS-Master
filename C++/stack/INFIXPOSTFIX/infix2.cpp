#include<bits/stdc++.h>
using namespace std;
int pr(char ch){
    if(ch=='+' || ch=='-') return 1;
    return 2;
}
int solve(int val1,int val2,char ch){
    if(ch=='+') return val1+val2;
    if(ch=='-') return val1-val2;
    if(ch=='*') return val1*val2;
    if(ch=='/') return val1/val2;
}
int main(){
    string s="1+(5*8)+6/2";
    stack<int> val;
    stack<char> op;
    for(int i=0;i<s.size();i++){
        if(s[i]>=48 && s[i]<=57 ){
            //cout<<s[i]<<endl;
            val.push(s[i]-48);
        }
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]); 
            else if(op.top()=='(' ) op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);
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
                    int val2=val.top();
                    val.pop();
                    int val1=val.top();
                    val.pop();
                    int ans=solve(val1,val2,ch);  
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
        int val2=val.top();
        val.pop();
        int val1=val.top();
        val.pop();
        int ans=solve(val1,val2,ch);  
        val.push(ans);
        //cout<<ans<<endl;
    }
    cout<<val.top()<<endl;
    cout<<1+(5*8)+6/2;
}