#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column ";
    cin>>r>>c;
    int key;
    cout<<"enter key ";
    cin>>key;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int sum=r+c;
    int low=0;
    int i=0;
    int high=sum-1;
    bool flag=false;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[i][mid]==key){
            flag=true;
            break;
        }
        else if(arr[i][mid]>key) high=mid-1;
        else low=mid+1;
    }
    cout<<flag;
}