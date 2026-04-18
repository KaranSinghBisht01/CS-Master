// #include<iostream>
// using namespace std;
// void display(int* p,int n){
//     //  for(int i=0;i<n;i++){
//     //     cout<<arr[i];
//     //  }  
//     // for(int i=0;i<n;i++){
//     //     cout<<p[i];
//     // }
//     // cout<<endl<<*p;
//     // for(int i=0;i<n;i++){
//     //     cout<<*p+i;
//     // }
//     for(int i=0;i<n;i++){
//         cout<<i[p];
//     }
//      return;  
// }

// int main (){
//     int n;
//     cout<<"enter size ";
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>i[arr];
//     }
//     display(arr,n);
//     return 0;
// }
#include<iostream>
using namespace std;
void check(int *p,int n,int *max,int *min){
    int i=0;
    *max=*(p+i);
    *min=*(p+i);
    for(int i=0;i<n;i++){
        if (*(p+i)>*max){
            *max=*(p+i);
        }
        else if(*(p+i)<*min){
            *min=*(p+i);
        }
    }
    return ;
}
int main (){
    int n;
    cout<<"enter the size of an array ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max;
    int min;
    check(arr,n,&max,&min);
    cout<<"max is "<<max<<endl;
    cout<<"min is "<<min;
}