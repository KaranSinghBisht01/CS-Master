#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<" Enter size ";
    cin>>n;
    int arr[n];
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int hash[15]={0};
    // counting the frequency
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    int q;
    cout<<"enter q ";
    cin>>q;
    // Numbers for which the frequency is counting 
    while(q--){
        int num;
        cin>>num;
        cout<<hash[num]<<" ";
    }
    return 0;
}