#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        int maxk=abs(nums[0]-1);
        for(int i=1;i<n;i++){
            maxk=gcd(abs(nums[i]-(i+1)),maxk);
        }
        cout<<maxk<<endl;
    }
}