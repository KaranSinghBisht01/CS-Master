// #include<iostream>
// using namespace std;
// int main(){
//     int r,c;
//     cout<<"enter row and column ";
//     cin>>r>>c;
//     int arr[r][c];
//     cout<<"enter element ";
//     for(int i=0;i<r;i++){
//         for(int j=0;j<c;j++){
//             cin>>arr[i][j];
//         }
//     }
//     for(int i=0;i<r;i++){
//         if(i%2==0){
//         for(int j=0;j<c;j++){
//             cout<<arr[i][j];
//         }
//         }
//         else {
//             for(int j=c-1;j>=0;j--){
//                 cout<<arr[i][j];
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column ";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}