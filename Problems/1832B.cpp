#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    ll maxi = 0;
    vector<ll> pre(n + 1, 0);
    for (ll i = 0; i < n; i++) {
        pre[i + 1] = pre[i] + arr[i];
    }

    for (ll i = 0; i <= k; i++) {
        // Maximum sum by removing `i` pairs and `k - i` maximum elements
        ll remaining_sum = pre[n - i] - pre[2 * (k - i)];
        maxi = max(maxi, remaining_sum);
    }

    cout << maxi << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
