#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[10];
    int n;
    cout<<"enter the size of arr ";
    cin>>n;
    vector<int> ans;
    cout<<"enter elements of array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    queue<int> q;
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    cout<<endl;
    int i=0,k=3;
    while(i+k<=n){
        while(q.size()>0 && q.front()<i) q.pop();
        if(q.size()==0 || q.front()>=i+k) ans.push_back(0);
        else ans.push_back(arr[q.front()]);
        i++;
    }
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}