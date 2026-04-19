#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
}
int main(){
    int r,c;
    cout<<"enter roe and column ";
    cin>>r>>c;
    cout<<maze(0,0,r,c);
    return 0;
}