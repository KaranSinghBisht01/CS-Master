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
    bool flag=false;
    cout<<"enter num to be search in the array ";
    cin>>x;
    for(int i=0;i<n;i++){
        if (arr[i]==x) flag = true ;
    }
    if (flag==true ) cout<<x<<" is present in this array ";
    else cout<<x<<" is present not in this array ";
    return 0;
}