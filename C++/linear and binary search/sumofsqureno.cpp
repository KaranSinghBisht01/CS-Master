#include<iostream>
#include<math.h>
using namespace std;
bool squre(int n){
    int root;
    // for(int i=1;i<=n;i++){
    //     if(i*i==n) return true;
    // }
    int roots=sqrt(n);
    if(roots*roots==n) return true;
    return false;
}
bool issqure(int c){
    int x=0;
    int y=c;
    while(x<=y){
    if(squre(x)==true && squre(y)==true) return true;
    else if(squre(y)==false){
        // for(int i=y;i>=1;i--){
        //     if(i*i==y) {
        //         y=i;
        //         break;
        //     }
        // }
        y=(int)sqrt(y)*(int)sqrt(y);
        x=c-y;
    }
    else {
        // for(int i=x;i>=1;i--){
        //     if(i*i==x){
        //         x=i;
        //         break;
        //     }
        // }
        x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
        y=c-x;
    }
    }
    return false ;
}
int main(){
    int c;
    cout<<"enter the number";
    cin>>c;
    cout<<issqure(c);
    return 0;
}