// // #include<iostream>
// // #include<string>
// // using namespace std;
// // bool check(string str,int i,int j){ 
// //     if(i>j) return true;
// //     if(str[i]!=str[j]) return false;
// //     else return check(str,i++,j--);
// // }
// // int main(){
// //     string str="mkmk";
// //     cout<<check(str,0,str.length()-1);
// // }

// #include<iostream>
// using namespace std;
// bool p(string str,bool flag,int i,int j){
//     if(i>j) return 1;
//     if(str[i]!=str[j]) return 0;
//     return p(str,flag,i++,j--);
// }
// int main(){
//     string str="momk";
//     cout<<p(str,true,0,str.length()-1);
// }