#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x, y;
    cin >> n >> x >> y;
    vector<ll> arr(n);
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll count = 0;
    map<pair<ll, ll>, ll> mp;

    for (ll i = 0; i < n; i++) {
        ll sumMod = arr[i] % x;             // Remainder when element is divided by x
        ll diffMod = arr[i] % y;            // Remainder when element is divided by y
        
        // To satisfy `arr[i] + arr[j] % x == 0`:
        // arr[j] % x == (x - sumMod) % x
        ll targetSumMod = (x - sumMod) % x;

        // To satisfy `|arr[i] - arr[j]| % y == 0`:
        // arr[j] % y == diffMod
        ll targetDiffMod = diffMod;

        // Count pairs with the desired (targetSumMod, targetDiffMod)
        count += mp[{targetSumMod, targetDiffMod}];

        // Update the map with current element
        mp[{sumMod, diffMod}]++;
    }

    cout << count << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
