#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v,int si,int ei){
    int n=v.size();
    int pe=v[si];
    int count=0;
    for(int i=si+1;i<=ei;i++){
        if(v[i]<=pe) count++;
    }
    int pi=count+si;
    swap(v[si],v[pi]);
    int i=si;
    int j=ei;
    while(i<pi && j>pi){
        if(v[i]<=pe) i++;
        if(v[j]>pe) j--;
        else if(v[i]>pe && v[i]<=pe){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pi;
}
int kthlargest(vector<int>& v,int si,int ei,int k){
    int n=v.size();
    int pi=partition(v,si,ei);
    if(pi+1==k) return v[n-k];
    else if(pi+1>k) return kthlargest(v,pi+1,ei,k);
    else return kthlargest(v,si,pi-1,k);
}
int main(){
    int n,k;
    cout<<"enter size ";
    cin>>n;
    cout<<"enter k ";
    cin>>k;
    vector<int> v(n);
    cout<<"enter elements ";
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    cout<<kthlargest(v,0,n-1,k);
}

// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     int n,k;
//     cout<<"enter size ";
//     cin>>n;
//     cout<<"enter k ";
//     cin>>k;
//     vector<int> v(n);
//     cout<<"enter elements ";
//     for(int i=0;i<n;i++){
//         cin>>v[i];
//     }
//     for(int i=0;i<n;i++){
//         for(int j=i;j<n;j++){
//             if(v[i]>v[j]) swap(v[i],v[j]);
//         }
//     }
//     cout<<v[n-k];
// }