// // #include<iostream>
// // #include<string.h>
// // using namespace std;
// // int main(){
// //     string str = "karan singh bisht ";
// //     string newstring;
// //     for(int i=0;i<str.length();i++){
// //         if(str[i]!='a' && str[i]!='A') newstring.push_back(str[i]);
// //     }
// //     cout<<newstring;
// //     return 0;
// // }

// #include<iostream>
// using namespace std;
// void removee(string str,string copy,int idx){
//     if(idx==str.length()){
//         cout<<copy;
//         return ;
//     }
//     char ch=str[idx];
//     if(ch=='a') removee(str,copy,idx+1);
//     else removee(str,copy+ch,idx+1);
// }
// int main(){
//     string str="karan singh bisht ";
//     removee(str,"",0);
// }

// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string str="karan singh bisht ";
//     string s="";
//     for(int i=0;i<str.length();i++){
//         if(str[i]!='a') s.push_back(str[i]);
//     }
//     cout<<s;
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;
// void removee(string str,string copy){
//     if(str==""){
//         cout<<copy;
//         return ;
//     }
//     char ch=str[0];
//     if(ch!='a') removee(str.substr(1),copy+ch);
//     else removee(str.substr(1),copy);
// }
// int main(){
//     string str="karan singh bisht ";
//     removee(str,"");
// }
#include<iostream>
#include<string>
using namespace std;
void removee(string str,string copy,int i){
    if(i==str.length()){
        cout<<copy;
        return ;
    }
    char ch=str[i];
    if(ch!='a') removee(str,copy+ch,i+1);
    else removee(str,copy,i+1);
}
int main(){
    string str="karan singh bisht ";
    removee(str,"",0);
}
