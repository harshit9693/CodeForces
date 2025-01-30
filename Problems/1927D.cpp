#include <bits/stdc++.h>
using namespace std;

void solve() {
    long t;
    cin >> t;
    while (t--) {
        long n;
        cin >> n;
        vector<long> arr(n + 1, 0);
        vector<long> v(n + 1, 0);

        long prev = 0;
        for (long p = 1; p <= n; p++) {
            cin >> arr[p];
            if (arr[p] != prev) {
                v[p] = p - 1; // Store the nearest different element's index
            } else {
                v[p] = v[p - 1]; // Carry forward the previous value
            }
            prev = arr[p];
        }

        long q;
        cin >> q;
        while (q--) {
            long l, r;
            cin >> l >> r;
            if (v[r] < l) { 
                cout << "-1 -1" << endl; // No valid pair
            } else {
                cout << v[r] << " " << r << endl; // Output the valid indices
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}
