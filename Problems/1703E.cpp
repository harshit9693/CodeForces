#include<bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    vector<string> arr(n); // Initialize the matrix with n x n

    // Input matrix elements
    for (ll i = 0; i < n; i++) {
        cin>>arr[i];
    }

    ll totalChanges = 0;

    // Iterate over layers
    for (ll row = 0; row < (n + 1) / 2; row++) {
        ll start = row, end = n - row - 1;
        for (ll col = start; col < end; col++) {
            ll cnt0 = 0, cnt1 = 0;

            // Collect values from the four positions
            vector<char> values = {
                arr[row][col],                 // current
                arr[col][n - row - 1],         // 90-degree
                arr[n - row - 1][n - col - 1], // 180-degree
                arr[n - col - 1][row]          // 270-degree
            };

            // Count zeros and ones
            for (ll val : values) {
                if (val == '0') cnt0++;
                else cnt1++;
            }

            // Calculate changes required
            totalChanges += min(cnt0, cnt1);
        }
    }

    cout << totalChanges << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
