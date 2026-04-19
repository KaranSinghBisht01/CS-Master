#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size ";
    cin>>n;
    int arr[1000];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v(n,0);
    int count=0;
    int idx=-1;
    for(int i=0;i<n;i++){
        int min= INT_MAX;
        for(int j=0;j<n;j++){
            if(arr[j]!=0){
                if(min>arr[j]){
                    min=arr[j];
                    idx=j;
                }
            }
        }
        arr[idx]=0;
        v[idx]=count;
        count++;
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}