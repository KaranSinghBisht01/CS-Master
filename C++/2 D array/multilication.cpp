#include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"enter the row and column of first matrix ";
    cin>>r1>>c1;
    cout<<"enter the row and column of seconf matrix ";
    cin>>r2>>c2;
    int arr[r1][c1];
    int brr[r2][c2];
    int res[r1][c2];
    if(c1==r2){
        cout<<"enter first matrix's element ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cin>>arr[i][j];
            }
        }
        cout<<"enter 2nd matrix's element ";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cin>>brr[i][j];
            }
        }

        // multiplication 
        // int res[r1][c2];
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<c1;k++){
                    // first matrix's row constant and second matrix's column constant
                    res[i][j]+=arr[i][k]*brr[k][j];
                }
            }
        }
        
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    }
    else{
        cout<<"multiplication not possible ";
    }
    return 0;
}