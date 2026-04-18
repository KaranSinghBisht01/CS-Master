#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column ";
    cin>>r>>c;
    int arr[50][50];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    // for(int i=0;i<r;i++){
    //     for(int j=0;j<c;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int brr[c][r];
    // for(int i=0;i<c;i++){
    //     for(int j=0;j<r;j++){
    //         brr[i][j]=arr[j][i];
    //     }
    // }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}