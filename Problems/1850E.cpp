#include <bits/stdc++.h>
using namespace std;
using ll = long long int;

// Function to check if a given width w can use exactly c cardboard
bool isValidWidth(ll w, vector<ll>& arr, ll c) {
    ll totalCost = 0;
    for (auto side : arr) {
        ll cost = (side + 2 * w) * (side + 2 * w);
        if (totalCost > c) return false; // Early termination if cost exceeds c
        totalCost += cost;
    }
    return totalCost <= c;
}

void solve() {
    ll n, c;
    cin >> n >> c;

    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    ll low = 0, high = 1e9, result = -1;

    // Binary search to find the maximum possible w
    while (low <= high) {
        ll mid = low + (high - low) / 2;

        if (isValidWidth(mid, arr, c)) {
            result = mid;      // Store the valid width
            low = mid + 1;     // Try to find a larger width
        } else {
            high = mid - 1;    // Try to find a smaller width
        }
    }

    cout << result << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
