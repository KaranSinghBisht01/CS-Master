#include<iostream>
using namespace std;
bool isvowel(char ch){
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
            return 1;
        }
        else return 0;
    }
    string sortVowels(string s) {
       // string t;
        for(int i=0;i<s.size();i++){
            for(int j=i+1,k=i+2;j<s.size();j++){
                if(isvowel(s[j]) && isvowel(s[i])){
                    if(s[j]<s[k]) swap(s[j],s[k]);
                    k++;
                }
                else k++;
            }
        }
        return s;
    }
int main(){
    string s;
    getline(cin,s);

    cout<<sortVowels(s);

}