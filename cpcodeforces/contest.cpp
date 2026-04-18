#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> b(n);
        int mx = 0, zeros = 0;
        for(int &x : b) {
            cin >> x;
            mx = max(mx, x);
            if(x == 0) zeros++;
        }
        cout<<mx-zeros<<"\n";
    }
    return 0;
}
