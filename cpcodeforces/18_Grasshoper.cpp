#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        if(x%k!=0){
            cout<<1<<"\n"<<x<<"\n";
        }
        else{
            cout<<2<<"\n";
            int count=1;
            while(true){
                x-=1;
                if(x%k!=0){
                    cout<<x<<" "<<count<<"\n";
                    break;
                }
                count++;  
            }
        }
    }
}