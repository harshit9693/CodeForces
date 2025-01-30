#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n;
    cin >> n;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<ll> pre(n);
    pre[0] = arr[0];
    for (ll i = 1; i < n; i++) {
        pre[i] = pre[i - 1] + arr[i];
    }

    ll maxDiff = 0; // To store the maximum difference

    // Iterate over all divisors of n
    for (ll i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            // First divisor
            ll firstFactor = i;
            ll mini1 = LLONG_MAX, maxi1 = LLONG_MIN;
            for (ll j = firstFactor - 1; j < n; j += firstFactor) {
                ll diff = (j == firstFactor - 1) ? pre[j] : (pre[j] - pre[j - firstFactor]);
                mini1 = min(mini1, diff);
                maxi1 = max(maxi1, diff);
            }
            maxDiff = max(maxDiff, maxi1 - mini1);

            // Second divisor
            if (i != n / i) { // Avoid duplicate calculations for square roots
                ll secondFactor = n / i;
                ll mini2 = LLONG_MAX, maxi2 = LLONG_MIN;
                for (ll j = secondFactor - 1; j < n; j += secondFactor) {
                    ll diff = (j == secondFactor - 1) ? pre[j] : (pre[j] - pre[j - secondFactor]);
                    mini2 = min(mini2, diff);
                    maxi2 = max(maxi2, diff);
                }
                maxDiff = max(maxDiff, maxi2 - mini2);
            }
        }
    }

    cout << maxDiff << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
