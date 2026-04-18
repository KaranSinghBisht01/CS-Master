#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        long long min_sum = 1LL * k * (k + 1) / 2;              // smallest possible sum
        long long max_sum = 1LL * k * (2 * n - k + 1) / 2;      // largest possible sum

        if (x < min_sum || x > max_sum)
            cout << "NO\n";
        else
            cout << "YES\n";
    }
    return 0;
}
