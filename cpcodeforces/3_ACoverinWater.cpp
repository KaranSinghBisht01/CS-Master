#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<char> s(n);
        for(int i=0;i<n;i++){
            cin>>s[i];
        }
        int count=0,l=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                l=i;
                while(i<n && s[i]!='#'){
                    count++,i++;
                }
                if((i-l+1)-1>=3){
                    count=2;
                    break;
                }
            }
            else continue;
        }
        cout<<count<<endl;
    }
    return 0;
}