#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<ll> a(n), a_prime(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    for (ll i = 0; i < n; i++) cin >> a_prime[i];

    // Find the first mismatch from the left
    ll l = 0;
    while (l < n && a[l] == a_prime[l]) {
        l++;
    }

    // Find the first mismatch from the right
    ll r = n - 1;
    while (r >= 0 && a[r] == a_prime[r]) {
        r--;
    }

    // If no mismatch, the arrays are identical
    if (l > r) {
        cout << 1 << " " << 1 << endl;
        return;
    }

    // Verify the segment [l..r]
    vector<ll> temp(a.begin() + l, a.begin() + r + 1);
    sort(temp.begin(), temp.end());

    for (ll i = l; i <= r; i++) {
        if (a_prime[i] != temp[i - l]) {
            cout << -1 << endl; // Invalid input as a_prime is not achievable by sorting a[l..r]
            return;
        }
    }

    // Extend the segment [l..r] to the largest possible valid range
    while (l > 0 && a[l - 1] <= a_prime[l]) {
        l--;
    }
    while (r < n - 1 && a[r + 1] >= a_prime[r]) {
        r++;
    }

    cout << l + 1 << " " << r + 1 << endl; // Convert to 1-based indexing
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
