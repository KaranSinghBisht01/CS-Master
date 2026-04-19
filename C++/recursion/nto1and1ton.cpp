// #include<iostream>
// using namespace std;
// void  print(int n){
//     if(n==0) return ;
//     cout<<n<<endl;
//     return print(n-1);
// }
// int main(){
//     int n;
//     cin>>n;
//     print(n);
// }

#include<iostream>
using namespace std;
void print(int i,int n){
    if(i>n) return ;
    cout<<i<<endl;
    return print(i+1,n);
}
int main(){
    int n;
    cout<<"enter  n ";
    cin>>n;
    print(1,n);
}