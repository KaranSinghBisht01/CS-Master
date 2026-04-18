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
        int totalcount=0;
        for(int i=0;i<n-1;i++){
            if((nums[i]%2==0 && nums[i+1]%2==0) || (nums[i]%2!=0 && nums[i+1]%2!=0)){
                totalcount++;
            }
        }
        cout<<totalcount<<endl;
    }
}