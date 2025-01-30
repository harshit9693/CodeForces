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

    ll i = 0, j = n - 1;
    ll left = arr[i], right = arr[j];
    ll maxLen = 0;

    while (i < j) {
        if (left == right) {
            // Update maxLen when left and right sums are equal
            maxLen = max(maxLen, i + 1 + n - j);
        }

        // Adjust pointers and sums
        if (left <= right) {
            i++;
            left += arr[i];
        } else {
            j--;
            right += arr[j];
        }
    }

    cout << maxLen << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}
