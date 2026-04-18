#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int firstMissingPositive(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        // int min=1;
        // for(int i=0;i<nums.size();i++){
        //     if(min==nums[i]) min++;
        // }
        // return min;
        
        int n=nums.size();
        vector<int> v(nums[n-1],0);
        for(int i=0;i<n;i++){
            v[nums[i]]=1;
        }
        for(int i=1;i<n;i++){
            if(v[i]==0) return i;
        }
        return 0;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int x;
    x=firstMissingPositive(nums);
    cout<<x;
}