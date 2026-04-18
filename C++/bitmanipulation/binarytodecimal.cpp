// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int n=s.size();
//     int result=0;
//     for(int i=n-1;i>=0;i--){
//         char ch=s[i];
//         int num=ch-'0';
//         result+=num*(1<<(n-i-1));
//     }
//     cout<<result;
// }

#include<iostream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int ans=0,power=1;
    for(int i=s.size()-1;i>=0;i--){
        char ch=s[i];
        ans+=(ch-'0')*power;
        power*=2;
    }
    cout<<ans;
}