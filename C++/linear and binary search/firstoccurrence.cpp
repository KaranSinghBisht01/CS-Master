// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={1,2,2,4,3,3,3,3,4,4,5,8,9};
//     int low=0;
//     int high=12;
//     int x=3;
//     bool flag=false;
//     while(low<high){
//         int mid=low+(high-low)/2;
//         if(arr[mid]==x){
//             if(arr[mid-1]==x) high=mid-1;
//             else {
//                 cout<<mid;
//                 flag=true;
//                 break;
//             }
//         }
//         else if(arr[mid]>x) high=mid-1;
//         else low=mid+1;
//     }
//     if(flag==false) cout<<-1;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void duplicateZeros(vector<int>& arr) {
//     vector<int> v;
//     int size=arr.size();
//     for(int i=0;i<size;i++){
//         if(arr[i]==0){
//             v.push_back(0);
//             v.push_back(0);
//         }
//         else {
//             v.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<size;i++){
//         cout<<v[i];
//     }
//     return ;
// }
// int main(){
//     vector<int> v={1,0,2,3,0,4,5,0};
//     duplicateZeros(v);
// }