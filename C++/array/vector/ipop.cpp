#include<iostream>
using namespace std;
int main (){
    int n,x;
    cout<<"enter size of an arrayy ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter "<<i<<"th element ";
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<endl<<i<<"th element is "<<arr[i];
    }
    return 0;
}