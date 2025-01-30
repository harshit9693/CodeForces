#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n, x;
    cin >> n >> x;
    
    queue<pair<ll, ll>> q;
    ll totalSum = 0;

    // Read input and initialize queue
    for (ll i = 0; i < n; i++) {
        ll num;
        cin >> num;
        q.push({num, 1}); // {value, count}
    }

    // Process the queue
    while (!q.empty()) {
        int num = q.front().first;
        int count = q.front().second;
        q.pop();
        totalSum += num * count;

        // If divisible by x, expand further
        if (num % x == 0) {
            q.push({num / x, count * x});
        } else {
            break; // Stop if not divisible
        }
    }

    // Add remaining elements (if any)
    while (!q.empty()) {
        int num = q.front().first;
        int count = q.front().second;
        q.pop();
        totalSum += num * count;
    }

    cout << totalSum << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
