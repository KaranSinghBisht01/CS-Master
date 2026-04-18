#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter r,c ";
    cin>>r>>c;
    int arr[50][50];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(j>i){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    // for(int i=0;i<r;i++){
    //     for(int j=c-1;j>=0;j--){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }
    for(int k=0;k<r;k++){
    for(int i=0,j=r-1;i<=j;i++,j--){
        int temp=arr[k][i];
        arr[k][i]=arr[k][j];
        arr[k][j]=temp;
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