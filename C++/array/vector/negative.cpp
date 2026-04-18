#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter size ";
    cin>>n;
    vector<int>v;
    cout<<"enter element "<<endl;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int i=0;
    int j=n-1;
    while(i<j){
        if(v[i]>0){
            i++;
        }
        if(v[j]>0){
            j--;
        }
        if (v[i]<0 && v[j]>0){
            int temp=v[i];
            v[i]=v[j];
            v[j]=temp;
        }
    }
   for(int i=0;i<n;i++){
    cout<<v[i];
   }
    return 0;
} 