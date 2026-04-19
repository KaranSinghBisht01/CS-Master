// // // #include<iostream>
// // // #include<string>
// // // #include<vector>
// // // using namespace std;
// // // void subset (string str,string ans,vector<string>& v ){
// // //     if(str==""){
// // //         v.push_back(ans);
// // //         return ;
// // //     }
// // //     char ch=str[0];
// // //     subset(str.substr(1),ans+ch,v);
// // //     subset(str.substr(1),ans,v);
// // // }
// // // int main(){
// // //     vector<string> v;
// // //     string str="abc";
// // //     subset(str,"",v);
// // //     for(string ele : v){
// // //         cout<<ele<<endl;
// // //     }
// // // }

// // #include<iostream>
// // #include<string>
// // using namespace std;
// // void subset(string str,string copy){
// //     if(str==""){
// //         cout<<copy<<endl;
// //         return;
// //     }
// //     char ch=str[0];
// //     subset(str.substr(1),copy+ch);
// //     subset(str.substr(1),copy);
// // }
// // int main(){
// //     string str="abc";
// //     subset(str,"");
// // }

// #include<iostream>
// #include<vector>
// #include<string>
// using namespace std;
// void subs(string str,string copy,vector<string>v,int i){
//     if(i==str.length()){
//         v.push_back(copy);
//         // cout<<copy<<endl;
//         for(int i=0;i<v.size();i++){
//             cout<<v[i]<<endl;
//         }
//         return ;
//     }
//     char ch=str[i];
//     subs(str,copy+ch,v,i+1);
//     subs(str,copy,v,i+1);
// }
// int main(){
//     vector<string>v;
//     string str="abc";
//     subs(str,"",v,0);
// }

#include<iostream>
using namespace std;
void s(string str,string copy,int i){
    if(i==str.length()){
        cout<<copy<<endl;
        return ;
    }
    char ch=str[i];
    s(str.substr(0),copy,i+1);
    s(str.substr(0),copy+ch,i+1);
}
int main(){
    string str="abc";
    s(str,"",0);
}