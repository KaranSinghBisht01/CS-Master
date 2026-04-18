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
    for(int i=0;i<r;i++){
        if(arr[i][0]==0){
            for(int j=0;j<c;j++){
                if(arr[i][j]==0) arr[i][j]=1;
                else arr[i][j]=0;
            }
        }
    }
    for(int j=0;j<c;j++){
        int no=0;
        int nz=0;
        for(int i=0;i<r;i++){
            if(arr[i][j]==0) nz++;
            else no++;
        }
        for(int i=0;i<r;i++){
           if(nz>no){
                if(arr[i][j]==0) arr[i][j]=1;
                else arr[i][j]=0;
           }
        }
    }
    int sum=0;
    for(int i=r-1;i>=0;i--){
        int power=1;
        for(int j=0;j<c;j++){
            sum+=arr[i][j]*power;
            power*=2;
        }
    }
    cout<<sum;
    return 0;
}