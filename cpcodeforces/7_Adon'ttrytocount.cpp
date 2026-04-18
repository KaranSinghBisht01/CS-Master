#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x;
        cin>>s;
        string prev=x;
        int count=0;
        bool flag=false;
        string curr=x;
        for(int i=0;i<6;i++){
            if(curr.find(s) != string::npos){
                cout<<count<<endl;
                flag=true;
                break;
            }
            count++;
            curr+=curr;
        }
        if(!flag) cout<<-1<<endl;
    }
    return 0;
}