// #include<iostream>
// #include<vector>
// using namespace std;
// void subarray(int arr[],vector<int>ans,int i,int n){
//     if(i==n){
//         for(int i=0;i<ans.size();i++){
//             cout<<ans[i];
//         }
//         cout<<endl;
//         return ;
//     }
//     subarray(arr,ans,i+1,n);
//     if(ans.size()==0){
//         ans.push_back(arr[i]);
//         subarray(arr,ans,i+1,n);
//     }
//     else if(arr[i-1]==ans[ans.size()-1]){
//         ans.push_back(arr[i]);
//         subarray(arr,ans,i+1,n);
//     }
// }
// int main(){
//     int arr[4]={1,2,3,4};
//     vector<int>ans;
//     subarray(arr,ans,0,4);
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    vector<int> v(n);
    cout<<"enter elements "<<endl;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<v[k];
            }
            cout<<endl;
        }  
    }
    return 0;
}
/*4
3
34
2
23
234
1
12
123
1234*/