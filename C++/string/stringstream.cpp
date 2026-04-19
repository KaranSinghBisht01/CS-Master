// #include<iostream>
// #include<string>
// using namespace std;
// int main(){
//     string s;
//     getline(cin,s);
//     int count=1;
//     for(int i=1;i<s.size();i++){
//         if(s[i]==' ' &&(s[i+1]>='a' && s[i+1]<='z')) count++;
//     }
//     cout<<count;
// }

#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
    string s="     the sky is   blue      ";
    // getline(cin,s);
    
    stringstream ss(s);// declear the string stream and give (s) string to the stream
    
    string temp;// string to store the words from the main string s;
    //cout<<endl;
    while(ss>>temp){
        cout<<temp<<endl;// no need to updation;
    }
    //cout<<temp[6];
}