#include<iostream>
#include<vector>
using namespace std;
void subs(string str,vector<string>&ans,string copy,bool flag){
    if(str==""){
        ans.push_back(copy);
        return;
    }
    char ch=str[0];
    char dh=str[1];
    if(str.length()==1){
        subs(str.substr(1),ans,copy+ch,true);
        subs(str.substr(1),ans,copy,true);
        return;// here program is complete
    }
    if(ch==dh){
        if(flag==true)subs(str.substr(1),ans,copy+ch,true);
        subs(str.substr(1),ans,copy,false);
    }
    else{
        if(flag==true) subs(str.substr(1),ans,copy+ch,true);
        subs(str.substr(1),ans,copy,false);
    }
}
int main(){
    string str="aaab";
    vector<string>ans;
    subs(str,ans,"",true);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}