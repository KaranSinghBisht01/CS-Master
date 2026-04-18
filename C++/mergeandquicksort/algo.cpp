#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& v1,vector<int>& v2,vector<int>& v){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) v[k++]=v1[i++];
        else v[k++]=v2[j++];
    }
    if(i==v1.size()) while(j<v2.size()) v[k++]=v2[j++];
    if(j==v2.size()) while(i<v1.size()) v[k++]=v1[i++];
    return ;
}
void mergesort(vector<int>& v){
    int n=v.size();
    if(n==1) return ;
    int n1=n/2,n2=n-n1;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[n1+i];
    }
    mergesort(v1);
    mergesort(v2);
    merge(v1,v2,v);
    v1.clear();/*To improve the space complexity here function call will be done according to eular tree so we delete the previous space.....*/
    v2.clear();
}
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergesort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}