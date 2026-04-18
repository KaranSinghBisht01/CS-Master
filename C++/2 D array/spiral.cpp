#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter row no ";
    cin>>r;
    cout<<"enter column no ";
    cin>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int tne=r*c;
    int minr=0,maxr=r-1,count=0;
    int minc=0,maxc=c-1;
    while(minr<=maxr && minc<=maxc){
        // Right 
        for(int j=minc;j<=maxc && tne>count;j++){
            cout<<arr[minr][j]<<" ";
            count++;
        }
        minr++;

        // Down
        for(int i=minr;i<=maxr && tne>count;i++){
            cout<<arr[i][maxc]<<" ";
            count++;
        }
        maxc--;
        // Left
        for(int j=maxc;j>=minc && tne>count;j--){
            cout<<arr[maxr][j]<<" ";
            count++;
        }
        maxr--;

        // Top
        for(int i=maxr;i>=minr && tne>count;i--){
            cout<<arr[i][minc]<<" ";
            count++;
        }
        minc++;
    }
    return 0;
}