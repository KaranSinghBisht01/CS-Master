#include<iostream>
using namespace std;
void generate(string str,int n){
    if(str.length()==n) {
        cout<<str<<endl;
        return ;
    }
    generate(str+'0',n);
    if(str=="" || str[str.length()-1]!='1')generate(str+'1',n);
}
int main(){
    int n;
    cin>>n;
    string str="";
    generate(str,n);
}