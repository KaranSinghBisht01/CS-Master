#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row and column ";
    cin>>r>>c;
    if(r!=c){
        cout<<"given matrix is not a squre matrix";
        return 0;
    }
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
    int high=r-1;
    int max=0;
    int total;
    while(low<=high){
        for(int i=0;i<r;i++){
            int mid=low+(high-low)/2;
            if(arr[i][mid]==1){
                if(arr[i][mid-1]==1){
                    total++;
                    low=mid+1;
                }
                else{
                    low=mid+1;
                }
            }
            else if(arr[i][mid]==0) low=mid+1;
            else high=mid-1; 
            if(max<total) max=i;
        }
    }
    cout<<max;
}