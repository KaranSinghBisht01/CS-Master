// #include<stdio.h>
// void  check(int *p,int n,int x){
//     int brr[50];
//     int k=0;
//     for(int i=0;i<n;i++){
//         for(int j=i+1;i<n;j++){
//             if(*(p+i)+*(p+j)==x){
//                printf("%d,%d\n",i,j);
//             }
//         }
//     }
//     return ;
// }
// // int main(){
// //     int n,x;
// //     printf("enter n ");
// //     scanf("%d",&n);
// //     printf("enter target ");
// //     scanf("%d",&x);
// //     int arr[n];
// //     for(int i=0;i<n;i++){
// //         scanf("%d",&arr[i]);
// //     }
// //     int k=0;
// //     check(arr,n,x);
// //     return 0;
// // }
// #include<stdio.h>
// #include<stdlib.h>
// int  sort(int *p,int n,int x){
//     int count=0;
//    for(int i=0;i<n;i++){
//     if(*(p+i)==x){
//         count++;
//     }
//    } 
//    return count;
// }
// int main(){
//     int n;
//     printf("enter n ");
//     scanf("%d",&n);
//     int *p=(int*)calloc(n,sizeof(int));
//     printf("enter element ");
//     for(int i=0;i<n;i++){
//         scanf("%d",&*(p+i));
//     }
//     int x;
//     printf("enter element which you want to search ");
//     scanf("%d",&x);
//    int ans = sort(p,n,x);
//    if(ans!=0){
//     printf("element is  present ");
//    }
//    else {
//     printf("element is not present ");
//    }
//    return 0;
// }
#include<stdio.h>
#include<stdlib.h>
void sort(int *p,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(*(p+i)<*(p+j)){
                int temp=*(p+i);
                *(p+i)=*(p+j);
                *(p+j)=temp;
            }
        }
    }
    return ;
}
int main(){
    int n;
    printf("enter n ");
    scanf("%d",&n);
    int *p=(int*)calloc(n,sizeof(int));
    printf("enter element ");
    for(int i=0;i<n;i++){
        scanf("%d",&*(p+i));
    }
    sort(p,n);
    for(int i=0;i<n;i++){
        printf("%d ",*(p+i));
    }
    return 0;
}