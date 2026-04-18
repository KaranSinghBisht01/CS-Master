#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<string> sh(n), ori(n);
    cout<<"shuffled"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>sh[i];
    }
    cout <<"original"<<endl;
    for (int i = 0; i < n; i++) {
        cin>>ori[i];
    }
    int pos[20];
    for (int i=0; i<n;i++) {
        for (int j=0;j<n;j++) {
            if (sh[i]==ori[j]) {
                pos[i]=j;
                break;
            }
        }
    }

    int l=1,curr=1;
    for (int i = 1; i < n; i++) {
        if (pos[i]==pos[i - 1] + 1)
            curr++;
        else
            curr = 1;
        if (curr > l)
            l = curr;
    }
    cout<<n - l<<endl;
    return 0;
}