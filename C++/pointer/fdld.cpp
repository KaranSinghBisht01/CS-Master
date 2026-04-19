#include<iostream>
using namespace std;
 void check(int n,int *fd,int *ld){
   *ld=n%10;
   while(n>9){
    n=n/10;
   }
   *fd=n; 
   return;
}
int main (){
    int n;
    int ld=0;
    int fd=0;
    cout<<"enter a number ";
    cin>>n;
    check(n,&ld,&fd);
    cout<<ld<<" "<<fd;
    return 0;
}