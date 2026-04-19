#include<iostream>
#include<cmath>
using namespace std;
int fac;

// bool is_prime(int n){
//     for(int i=2;i<sqrt(n);i++){
//         if(n%i==0){
//             fac=i;
//             return false ;
//         }
//     }
//     return true;
// }

void primefac(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            cout<<i<<" ";
            //cout<<n/i<<" ";
        }
    }
    for(int i=sqrt(n);i>=2;i--){
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    return ;
}

int main(){
    int n;
    cin>>n;
    // cout<<is_prime(n);
    primefac(n);
    //cout<<endl<<fac;
}