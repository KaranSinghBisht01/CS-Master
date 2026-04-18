#include<bits/stdc++.h>
using namespace std;
int contiguousarrayII(vector<int>& nums){
    int count=0;
    unordered_map<int,int> prefixsum;
    int sum=0,count=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0) sum+=-1;
        else sum+=1;

        if(prefixsum.find(sum)!=prefixsum.end()){
            count+=prefixsum[sum];
        }
        
        prefixsum[sum]++;
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    // Array should be in binary form 
    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i]<0 && nums[i]>1){
            cout<<"invalid array ";
            return 0;
        }
    }
    cout<<"total no of subarray having equal no of zero and once "<<contiguousarrayII(nums);
    return 0;
}