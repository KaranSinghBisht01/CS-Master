#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b){
            cout<<"First";
        }
        else if(b>a){
            cout<<"Second";
        }
        else{
            if(c%2==1) cout<<"First";
            else cout<<"Second";
        }
        cout<<endl;
    }
}