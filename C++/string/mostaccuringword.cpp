#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    stringstream ss(s);
    string temp;
    vector<string> str;
    while(ss>>temp){
        str.push_back(temp);
    }
    sort(str.begin(),str.end());
    //string maxac;
    int count=1,maxcount=1;
    for(int i=1;i<str.size();i++){
        if(str[i]==str[i-1]){
            count++;
           // maxac+=str[i];
            cout<<str[i]<<" "<<count<<endl;
        }
        else count=1;
        maxcount=max(maxcount,count);
    }
    //cout<<maxcount<<endl;
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    string s="";
    cout<<s.size();
}