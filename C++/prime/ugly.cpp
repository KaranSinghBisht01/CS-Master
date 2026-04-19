#include<iostream>
using namespace std;
int nthUglyNumber(int n) {
        int ans=0;
        int count=2;
        int i=2;
        if(n<=2) return n;
        while(count<=n){
            if(i%2==0 || i%3==0 || i%5==0){
                ans=i;
                count++;
            }
        i++;
    }
    return ans;
}
int main(){
    // int n;
    // cin>>n;
    cout<<nthUglyNumber(11);
}