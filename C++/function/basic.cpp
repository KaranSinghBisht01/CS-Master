// #include<iostream>
// using namespace std;
// void greet(int n){
//     for (int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return ;
// }
// int main (){
//     int a,b,c;
//     cout<<"enter a ";
//     cin>>a;
//     cout<<"enter b ";
//     cin>>b;
//     cout<<"enter c";
//     cin>>c;
//     greet(a);
//     greet(b);
//     greet(c);
//     return 0;
// }
#include<iostream>
using namespace std;
int  combination(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}
int main (){
    int n,r;
    cout<<"enter n ";
    cin>>n;
    cout<<"enter r ";
    cin>>r;
    int ans=combination(n)/(combination(r)*combination(n-r));
    cout<<ans;
    return 0;
}