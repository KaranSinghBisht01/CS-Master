#include<iostream>
using namespace std;
int main(){
    int arr[]={5,30,1,4,2};
    for(int i=0;i<5;i++){
        for(int j=i;j<5;j++){
            int min=arr[i];
            if(arr[j]<min){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}