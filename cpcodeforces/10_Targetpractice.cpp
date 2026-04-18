#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        char arr[10][10];
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>arr[i][j];
            }
        }
        int count=0;
        int lastidx=10;
        int n=10;
        for(int i=0;i<5;i++){
            int cross=0;
            for(int j=i;j<10-i;j++){
               if(arr[i][j]!='.'){
                    cross++;
                    arr[i][j]='.';
               } // right to left->top 
               if(arr[j][i]!='.'){
                    cross++;
                    arr[i][j]='.';
               } // up to down->left
               if(arr[n-i-1][j]!='.'){
                    cross++;
                    arr[i][j]='.';
               } // right to left->bottom
               if(arr[j][n-i-1]!='.'){
                    cross++;
                    arr[i][j]='.';
               } // up down->right 
            }
            count+=(i+1)*cross;
        }
        cout<<count<<endl;
    }
}