#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false); // Faster input/output
    cin.tie(nullptr);

    // Precompute the co-primes for numbers 1 to 1000
    vector<vector<int>> mp(1001);
    for (int i = 1; i <= 1000; i++) {
        for (int j = i; j <= 1000; j++) { // Avoid redundant pairs
            if (__gcd(i, j) == 1) {
                mp[i].push_back(j);
                mp[j].push_back(i);
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vector<ll> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        // Map numbers to their indices (1-based index)
        vector<int> ind(1001, -1);
        for (int i = 0; i < n; i++) {
            ind[arr[i]] = i;
        }

        ll maxi = -1;
        for (ll i = 0; i < n; i++) {
            ll firstNum = arr[i];
            for (auto it : mp[firstNum]) {
                if (ind[it] != -1) {
                    maxi = max(maxi, i + ind[it] + 2);
                }
            }
        }

        cout << maxi << '\n';
    }

    return 0;
}
