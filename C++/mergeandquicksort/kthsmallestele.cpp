#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>& v,int si,int ei,int k){
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
        else if(v[i]>pe && v[j]<=pe){
            swap(v[i],v[j]);
            i++;
            j--;
        }
    }
    return pi;
}
int quick(vector<int>& v,int si,int ei,int k){
    int pi=partition(v,si,ei,k);
    if(pi+1==k) return v[pi];
    else if(pi+1<k) return quick(v,pi+1,ei,k);
    else return quick(v,si,pi-1,k);
}
int main(){
    int n;
    cout<<"enter size ";
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int k,e=0;
    cout<<"enter k ";
    cin>>k;
    cout<<quick(v,0,n-1,k);
}

// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={-2,-4,-2,5,6,0};
//     cout<<"enter k ";
//     int k;
//     cin>>k;
//     for(int i=0;i<6;i++){
//         for(int j=i+1;j<6;j++){
//             if(arr[i]>arr[j]) swap(arr[i],arr[j]);
//         }
//     }
//     cout<<arr[k-1];
// }