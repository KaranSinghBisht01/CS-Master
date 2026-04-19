// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     string s=to_string(n);
//     cout<<s.size();
// }
#include<iostream>
#include<vector>
#include<string>
#include<climits>
#include<algorithm>
using namespace std;
int minPartitions(string n) {
    //vector<int> nums(n.size());
    //int ans=0;
    int nums = std::stoi(n);
    //cout<<nums;
    int maxx=INT_MIN;
    while(nums>0){
        int ld=nums%10;
        nums/=10;
        maxx=max(maxx,ld);
    }
    return maxx;
}
int main(){
    string s;
    getline(cin,s);
    cout<<minPartitions(s);
    return 0;
}