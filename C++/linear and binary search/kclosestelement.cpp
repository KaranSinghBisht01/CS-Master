#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k,x;
    cout<<"enter size of ans vector";
    cin>>k;
    cout<<"enter element to be searched";
    cin>>x;
    vector<int> ans(k);
    // case 1 
    // a=if x present in array 
    // b=if x is not prsent in array
    int low=0;
    int high=v.size()-1;
    int mid=-1;
    int idx=0;
    while(low<=high){
        mid=low+(high-low)/2;
        if(v[mid]==x) {
            ans[idx]=v[mid];
            idx++;
            break;
        }
        else if(v[mid]>x) high=mid-1;
        else low=mid+1;
    }
    int lb=high;
    int ub=low;
    if(idx!=0){
        lb=mid-1;
        ub=mid+1;
    }
    while(idx<k && lb>=0 && ub<=n-1){
        int d1=abs(x-v[lb]);
        int d2=abs(x-v[ub]);
        if(d1<=d2){
            ans[idx]=v[lb];
            lb--;
        }
        else {
            ans[idx]=v[ub];
            ub++;
        }
        idx++;
    }
    // case 2
    // a=if(x<v[0]);
    if(lb<0){
        for(int i=0;i<k;i++){
            ans[i]=v[i];
        }
    }
    // b=if(x>nums[n-1])
    else if(ub>n-1){
        int i=k-1;
        int j=x-1;  
        ans[i]=v[j];
    }
    //sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++){
        cout<<ans[i];
    }
    return 0;
}