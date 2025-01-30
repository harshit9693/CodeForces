#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;

    vector<ll> pre(n, 0);

    // Calculate the prefix sum of 1's in the string `a`
    pre[0] = (a[0] == '1') ? 1 : 0;
    for (ll i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + (a[i] == '1');
    }

    ll flips = 0; // Number of flips performed
    for (ll i = n - 1; i >= 0; i--) {
        // Determine the actual bit of `a[i]` after `flips`
        char actual_bit = (flips % 2 == 0) ? a[i] : (a[i] == '1' ? '0' : '1');

        if (actual_bit == b[i]) {
            // The bit matches, no need to flip
            continue;
        }

        // The bit does not match, check if the prefix is valid for flipping
        if (2 * pre[i] != (i + 1)) {
            cout << "NO" << endl;
            return;
        }

        // Perform a flip
        flips++;
    }

    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
