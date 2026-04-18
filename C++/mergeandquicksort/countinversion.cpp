// #include<iostream>
// using namespace std;
// int main(){
//     int ci=0;
//     int arr[100];
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]>arr[j] ) ci++;
//         }
//     }
//     cout<<ci;
// }

#include<iostream>
#include<vector>
using namespace std;
int c=0;
int inversion(vector<int>& v1,vector<int>& v2){
    int count=0;
    int i=0,j=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]>v2[j]){
            count+=(v1.size()-i);
            j++;
        }
        else{
            i++;
        }
    }
    return count;
}
void mergesort(vector<int>& v1,vector<int>& v2,vector<int>& v){
    int i=0,j=0,k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<v2[j]) v[k++]=v1[i++];
        else v[k++]=v2[j++];
    }
    if(i==v1.size()) while(j<v2.size()) v[k++]=v2[j++];
    else if(j==v2.size()) while(i<v1.size()) v[k++]=v1[i++];
    return ;
}
void merge(vector<int>& v){
    int n=v.size();
    if(n==1) return ;
    int n1=n/2;
    int n2=n-n1;
    vector<int> v1(n1);
    vector<int> v2(n2);
    for(int i=0;i<n1;i++){
        v1[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        v2[i]=v[n1+i];
    }
    merge(v1);
    merge(v2);
    c+=inversion(v1,v2);
    mergesort(v1,v2,v);
    v1.clear();
    v2.clear();
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    merge(v);
    cout<<c;
}