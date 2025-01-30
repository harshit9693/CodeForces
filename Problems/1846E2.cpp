#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool find_gp(ll x) {
    for (ll r = 2; r <= pow(x, 1.0 / 3.0); r++) {  // Optimal loop range based on constraints
        ll sum = 1;
        for (ll n = 1; sum <= x; n++) {
            if (sum == x) return true;
            if (sum > (x - 1) / r) break;  // Avoid overflow
            sum = sum * r + 1;  // Utilizing formula for power sums in geometric series
        }
    }
    return false;
}

void solve() {
    ll sum;
    cin >> sum;

    if (sum < 7) {
        cout << "NO" << endl;
        return;
    }

    if (find_gp(sum)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
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
